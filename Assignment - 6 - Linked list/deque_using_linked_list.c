#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next,*prev;
};

struct node *front = NULL,*rear = NULL;

void insert_front(int);
void insert_back(int);

void delete_front();
void delete_back();

void peek_head();
void peek_tail();

void display();
int check_element(int);

int main()
{
   int ch,v;
   do{
      printf("Enter element in the front\n");
      printf("Enter element in the back\n");
      printf("Delete element in the front\n");
      printf("Delete element in the back\n");
      printf("Peek head element\n");
      printf("Peek tail element\n");
      printf("Check element is present in queue or not\n");
      printf("Display element in the queue\n");

      printf("Enter your choice: ");
      scanf("%d",&ch);

      switch(ch)
      {
	 case 1:
	     printf("Enter the value to be inserted in the front: ");
		 scanf("%d", &v);
		 insert_front(v);
		 break;

	 case 2:
         printf("Enter the value to be inserted in the back: ");
		 scanf("%d", &v);
		 insert_front(v);
		 break;

	 case 3:
	     delete_front();
	 break;

	 case 4:
         delete_back();
        break;

     case 5:
          peek_head();
          break;

     case 6:
         peek_tail();
         break;

     case 7:
         {int num;
         printf("Enter the element to be searched in the queue\n");
         scanf("%d",&num);
        int result = check_element(num);
        if(result==-1)
        {
            printf("Queue is empty\n");
        }
        else if(result==0)
        {
            printf("Element is not present in the queue\n");
        }
        else
        {
            printf("Element is present in the queue\n");
        }
        break;
         }


	 default: printf("\nWrong choice\n");
    }

   }while(ch>=1&&ch<=7);
}

void insert_back(int v)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = v;
   newnode -> next = NULL;
   newnode->prev = NULL;
   if(front == NULL)
   {
    front = rear = newnode;
   }
   else
   {
      rear -> next = newnode;
      newnode->prev=rear;
      rear = newnode;
   }
}

void insert_front(int v)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = v;
   newnode -> next = NULL;
   newnode->prev = NULL;
   if(rear == NULL)
   {
    front = rear = newnode;
   }
   else
   {
    front -> prev = newnode;
    newnode -> prev = front;
    front = newnode;
   }
}

void delete_front()
{
   if(front == NULL)
      printf("\nQueue is Empty\n");
   else
  {
      struct node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}

void delete_back()
{
   if(rear == NULL)
      printf("\nQueue is Empty\n");
   else
  {
      struct node *temp = rear;
      rear = rear -> prev;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}

void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct node *temp = front;
      while(temp->next!= NULL)

	 {printf("%d\n",temp->data);
	 temp = temp -> next;
	 }
      printf("%d\n",temp->data);

}
}

void peek_head()
{
    if(front==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("%d\n",front->data);
    }
}

void peek_tail()
{
    if(rear==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("%d\n",rear->data);
    }
}

 int check_element(int x)
 {
     if(front==NULL)
     {
         printf("Queue is empty\n");
         return -1;
     }
     struct node *temp1 = front,*temp2 = rear;;
     while(temp1->next!=temp2)
     {
         if(temp1->data==x)
         {
             return temp1->data;
         }
         else if(temp2->data==x)
         {
             return temp2->data;
         }
         temp1=temp1->next;
         temp2=temp2->prev;
     }
     return 0;
 }

