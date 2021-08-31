#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};
struct node *front = NULL,*rear = NULL;

void insert(int);
void delete_();
void display();
void peek();
int is_empty(struct node *);

int main()
{
   int ch,v;
   do{
      printf("1.Insert\n2.Delete\n3.Display\n4.Peek\n");

      printf("Enter your choice: ");
      scanf("%d",&ch);

      switch(ch)
      {
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &v);
		 insert(v);
		 break;

	 case 2: delete_();
	 break;

	 case 3: display();
	 break;

	 case 4:
        peek();
        break;

     case 5:
      if(is_empty(front))
      {
        printf("Queue is not empty\n");
      }
      else
      {
        printf("Queue is empty\n");
      }
      break;

	 default: printf("\nWrong choice\n");
    }

   }while(ch>=1&&ch<=5);
}
void insert(int v)
{
   struct node *newnode;
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = v;
   newnode -> next = NULL;
   if(front == NULL)
      front = rear = newnode;
   else{
      rear -> next = newnode;
      rear = newnode;
   }
}
void delete_()
{
   if(front == NULL)
      printf("\nQueue is Empty\n");
   else{
      struct node *temp = front;
      front = front -> next;
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

void peek()
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

int is_empty(struct node *front)
 {
     if(front==NULL)
     {
         return 0;
     }
     return 1;
 }

