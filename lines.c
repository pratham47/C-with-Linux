#include<stdio.h>
#include <stdlib.h>

int main()
{
    char lines[100];

    scanf("%s",lines);

    int length = 0;
    for(int i = 0; lines[i] != '\0'; i++)
    {
        length++;
    }

    if(length >= 80)
    {
        printf("%s",lines);
    }
    else
    {
        printf("Length smaller than 80 characters");
    }
}
