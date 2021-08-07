#include <stdio.h>
#include <ctype.h>

int size = 10, stack[10], top = -1;

int isempty()
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

int peek()
{
   if(!isempty())
   {
      return stack[top];
   }
   else
   {
      printf("Stack Underflow.\n");
   }
}

int pop()
{
   int popped;

   if(!isempty())
   {
      popped = stack[top];
      top--;
      return popped;
   }
   else
   {
      printf("Stack Underflow.\n");
   }
}

void push(int data)
{

   if(top != size-1)
   {
      top++;
      stack[top] = data;
   }
   else
   {
      printf("Stack Overflow\n");
   }
}

int eval(int a, int b, char ch)
{
    if(ch == '+')
    {
        return a + b;
    }
    else if(ch == '-')
    {
        return a - b;
    }
    else if(ch == '/')
    {
        return a / b;
    }
    else
    {
        return a * b;
    }
}

void expression(int n)
{
    int element_1, element_2, ans;
    char ch;

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &ch);
        if(isdigit(ch))
        {
          push(ch-48);
        }

        else
        {
          element_1 = pop();
          element_2 = pop();

          ans = eval(element_1, element_2, ch);
          push(ans);
        }
    }
    printf("%d",ans);
}

int main()
{
    int num;
    printf("Enter no. of Elements in the expression ");
    scanf("%d", &num);

    expression(num);
}
