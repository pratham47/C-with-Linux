#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[200], str2[200];
    int i = 0, k = 0, j, len_1 = 0, len_2 = 0;

    scanf("%s",str1);
    scanf("%s",str2);

    while(str1[i] != '\0')
    {
       len_1++;
       i++;
    }

     i=0;
     while(str2[i] != '\0')
     {
       len_2++;
       i++;
     }

for( i = 0; i <= len_1 - len_2; i++)
{
    for(j = 0; j < len_2; j++)
    {
        if(str1[i+j] != str2[j])
        {
            break;
        }
    }
    if(j == len_2)
    {
        k = i;
    }
}

if(k == 0)
{
    printf("-1");
}

else
{
    printf("%d",k);
}

}
