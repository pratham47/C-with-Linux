#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
 int data;
 struct node *next;
};

struct node *top = NULL;

struct node *push(struct node *,int );
struct node *pop(struct node *);
void peek(struct node *);
int is_empty();
struct node *display(struct node *);

int main()
{
int ch;
do
{
    printf("enter 1 to push an element in the stack\n");
    printf("enter 2 to pop an element in the stack\n");
    printf("enter 3 to peek in the stack\n");
    printf("enter 4 to display all the elements in the stack\n");
    printf("enter 5 to see if stack is empty or not\n");

    printf("enter your choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:printf("enter the data you want to enter in the stack\n");
    int val;
    scanf("%d",&val);
        top=push(top,val);
        break;

    case 2:
        top=pop(top);
        break;

    case 3:
        peek(top);
        break;

    case 4:
        top=display(top);
        break;

    case 5:
        if(is_empty()))
        {
            printf("Stack is not empty\n");
        }
        else
        {
            printf("Stack is empty\n");
        }
        break;

    default:
        printf("wrong choice\n");
    }

}while(ch>=1&&ch<=5);
}

struct node *push(struct node *top,int v)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=v;
    if(top==NULL)
    {
    top=newnode;
    newnode->next=NULL;
    }else
    {

        newnode->next=top;;
        top=newnode;
    }
return top;
}
struct node *pop(struct node *top)
{ struct node *ptr;
 if(top==NULL)
 {
     printf("underflow\n");
 }
 else
{ptr=top;
    top=top->next;
    printf("element deleted is %d\n",ptr->data);
     free(ptr);
 }
 return top;
}

void peek(struct node *top)
{
    if(top==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n",top->data);
    }
}

struct node *display(struct node *top)
{struct node *ptr;
ptr=top;
    if(top==NULL)
    {
        printf("empty stack\n");
    }
    else
    {
        while(top!=NULL)
        {
            printf("%d\n",top->data);
            top=top->next;
        }
    }
    return ptr;
    }

 int is_empty()
 {
     if(top==NULL)
     {
         return 0;
     }
     return 1;
 }
