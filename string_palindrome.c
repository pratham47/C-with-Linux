#include<stdio.h>

int main()
{  char str[100];
   scanf("%s",str);

   int i, j, length=0, flag=0;

   for(i = 0; str[i] != '\0'; i++)
   {
       length++;
   }

   for(i = 0, j = length - 1; i < j ; i++, j--)
   {
       if(str[i] != str[j])
       {
           printf("Not Palindrome");
           flag=1;
           break;
       }
   }

   if(flag != 1)
   {
       printf("Palindrome string");
   }
}
