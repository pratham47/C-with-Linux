#include <stdio.h>
#include <stdlib.h>

int location(char *str1, char *str2)
{
    int flag=0;
    for(int i = 0; str1[i] !='\0'; i++)
    {
        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i ]== str2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag ==1 )
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str1[100], str2[100];

    scanf("%s",str1);
    scanf("%s",str2);

    int pos = location(str1,str2);

    printf("\n%d",pos);

}
