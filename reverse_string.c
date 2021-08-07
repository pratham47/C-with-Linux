#include <stdio.h>
#include <stdlib.h>

void reverse(char *str)
{
    int i = 0, length = 0,j;
    while(str[i] != '\0')
    {
        length++;
        i++;
    }

    for(i = 0, j = length - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}

int main()
{
    char str[100];
    scanf("%s",str);

    reverse(str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c",str[i]);
    }
}
