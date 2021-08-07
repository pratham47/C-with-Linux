#include <stdio.h>

void strncpy_(char *str1,char *str2,int n)
{
    int index=0;

    while(index < n && str2[index] != '\0')
    {
        str1[index] = str2[index];
        index++;
    }

    printf("%s",str1);
}

void strncat_(char *str1 , char *str2,int n)
{
    int len1 = 0, len2 = 0;
    for(int i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    for(int i = 0; str1[i] != '\0'; i++)
    {
        len2++;
    }

    char result[len1 + len2 + 1];

    int index=0;

    for(int i = 0; i < len1; i++)
    {
        result[index++] = str1[i];
    }

    for(int i = 0; i < len2; i++)
    {
        result[index++] = str2[i];
    }
    result[index]='\0';

    printf("%s",result);
}

int strncmp_(char *str1,char *str2,int n)
{
    int i = 0, flag;
  while(*(str1+i) != '\0' && *(str2+i) != '\0' && i < n)
  {
    if(*(str1+i) == *(str2+i))
    {
      flag = 0;
      i++;
    }
    else
    {
      flag = *(str1+i) - *(str2+i);
      break;
    }
  }
  return flag;
}

int main()
{

    char str1[100], str2[100];
    int n;

    printf("Enter string s1 ");
    scanf("%s",str1);

    printf("Enter string s2 ");
    scanf("%s",str2);

    printf("Enter number of characters  ");
    scanf("%d",&n);

    printf("\nConcatenated String: ");
    strncat_(str1,str2,n);

    printf("\n String compare: ");
    int comp = strncmp_(str1,str2,n);

    if(comp == 0)
    {
       printf("Both Strings Are Equal\n");
    }
    else if(comp < 0)
    {
       printf("String1 is Less than String2\n");
    }
    else
    {
       printf("String1 is Greater than String2\n");
    }

    printf("\nString copy: ");
    strncpy_(str1,str2,n);
}
