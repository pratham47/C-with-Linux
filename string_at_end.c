#include <stdio.h>
#include <stdlib.h>

int str_at_end(char *str1, char *str2)
{
    int i, j, len_1=0, len_2=0;

    for(i = 0;str1[i] !='\0' ;i++)
    {
        len_1++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        len_2++;
    }

    j = len_1 - len_2;

    for(i = 0; i < len_2; i++)
    {
        if(str1[j] != str2[i])
        {
                return 0;
        }
        j++;
    }
    return 1;
}

int main()
{
    char str1[200], str2[200];
    scanf("%s",str1);
    scanf("%s",str2);

    int ans = str_at_end(str1,str2);
    printf("\n%d",ans);
}
