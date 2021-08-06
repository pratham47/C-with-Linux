#include <stdio.h>
#include <stdlib.h>

// Assuming that stack only contains natural numbers

int top = -1, st[10];

void push(int st[], int);
int pop(int st[]);
int peek(int st[]);
int is_empty(int st[]);
void display(int st[]);

int main()
{int ch;
   do
   {
    printf("Enter 1 to push in the stack\n");
    printf("Enter 2 to pop in the stack\n");
    printf("Enter 3 to peek in the stack\n");
    printf("Enter 4 to see if stack is empty or not in the stack\n");
    printf("Enter 5 to display the stack\n");
    printf("Enter your choice\n");

    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
        printf("enter the value to be pushed\n");
        int v;
        scanf("%d",&v);
        push(st,v);
        break;

        case 2:
        int popped = pop(st);
        if(popped == 0)
        {
            printf("Stack is empty");
        }
        else
        {
        printf("The deleted element is %d\n", popped);
        }
        break;

        case 3:
        int top_element = peek(st);
        if(top_element == 0)
        {
            printf("\nStack is empty");
        }
        else
        {
        printf("%d\n",top_element);
        }
        break;

        case 4:
        int empty = is_empty(st);
        if( empty )
        {
           printf("Stack is empty");
        }
        else
        {
           printf("Stack is not empty");
        }
        break;

        case 5:
        display(st);
        break;

        default: printf("wrong choice\n");
    }

}while(ch>=1&&ch<=5);

}

    void push(int st[], int x) // TC: o(1)~ CONSTANT
    {
       if(top == 9)
       {
          printf("stack overflow\n");
       }
       else
       {
          top++;
          st[top] = x;
       }
    }

    int pop(int st[]) // TC: o(1)~ CONSTANT
    {
        if(top == -1)
        {
            return 0;
        }
        else
        {
         int popped = st[top];
         top--;

         return popped;
        }
    }

    int peek(int st[]) // TC: o(1)~ CONSTANT
    {
        if(top == -1)
        {
            return 0;
        }
        else
        {
            return st[top];
        }
    }

    int is_empty(int st[]) // TC: o(1)~ CONSTANT
    {
        if(top == -1)
        {
           return 1;
        }
        else
        {
           return 0;
        }
    }

    void display(int st[])
    {
      if(top == -1)
      {
        printf("underflow\n");
      }
      else
      {
        for(int i = top; i >= 0; i--)
        {
            printf("%d\n",st[i]);
        }
      }
    }
