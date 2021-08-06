#include <stdio.h>
#include <stdlib.h>

// Assuming that queue only contains natural numbers

int que[10], front = -1, rear = -1;

void enqueue(int que[], int );
int dequeue(int que[]);
void display(int que[]);
int is_empty(int que[]);
int  peek(int que[]);

int main()
{
    int ch;
    do
    {
    printf("Enter 1 to insert in the queue\n");
    printf("Enter 2 to delete in the queue\n");
    printf("Enter 3 to peek in the queue\n");
    printf("Enter 4 to check whether queue is empty or not\n");
    printf("Enter 5 to display the queue\n");
    printf("Enter your choice\n");

    scanf("%d", &ch);

    switch( ch )
    {
        case 1:

        printf("enter the value to be inserted\n");
        int v;
        scanf("%d",&v);
        enqueue(que,v);

        break;

        case 2:
         int deleted_ = dequeue(que);
         if(deleted_ == 0)
         {
             printf("\n Queue is empty");
         }
         else
         {
         printf("\n Element Dequeued is %d",que[deleted_]);
         }
        break;

        case 3:
        int front_ = peek(que);
        if(front_ == 0)
        {
            printf("\nQueue is Empty");
        }
        else
        {
            printf("\n Element at the front if the queue is %d",que[front_]);
        }

        break;

        case 4:
        int empty = is_empty(que);
        if(empty)
        {
            printf("\n Queue is not empty");
        }
        else
        {
            printf("\n Queue is empty");
        }

        break;

        case 5:
        display(que);

        break;

    default: printf("wrong choice\n");
    }

}while(ch >=1 && ch <=5);

}

void enqueue(int que[],int num)  // TC: o(1)~ CONSTANT
{
    if(rear == 9)
    {
        printf("queue is full\n");
    }
    else if(front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        que[rear] = num;
    }
    else
        {
           rear++;
           que[rear] = num;
        }
    }

    int dequeue(int que[])  // TC: o(1)~ CONSTANT
    {
        if(front > rear || front == -1)
        {
            return 0;
        }
        else
        {
            int front_ = que[front];
            front++;
            if(front > rear )
            {
                front = -1;
                rear = -1;
            }
            return front_;
        }
    }

    int peek(int que[])  // TC: o(1)~ CONSTANT
    {
        if(front == -1 || front > rear)
        {
           return 0;
        }
        else
        {
            return que[front];
        }
    }

    int is_empty(int que[])  // TC: o(1)~ CONSTANT
    {
        if(front == -1 || front > rear)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void display(int que[])
    {
        if(front == -1 || front > rear)
        {
            printf("empty queue\n");
        }
        else
        {
            for(int i = front; i <= rear; i++)
            {
           printf("%d\n",que[i]);
            }
        }
    }
