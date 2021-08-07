#include <stdio.h>
#include <stdlib.h>

void squeeze(char *str1, char *str2)
{
    int i, j, k = 0, flag = 0;

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            str1[k] = str1[i];
            k++;
        }
    }

    str1[k] = '\0';
}

int main()
{
    char str1[100], str2[100];

    scanf("%s",str1);
    scanf("%s",str2);

    squeeze(str1,str2);

    int length = 0;

    for(int i = 0; str1[i] != '\0'; i++)
    {
        length++;
    }

    if(length == 0)
    {
        printf("%d",-1);
    }

    printf("\n%s",str1);
}
