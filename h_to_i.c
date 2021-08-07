#include <stdio.h>
#include <stdlib.h>

int h_to_i(char* str, int n)
{
    int i = 0, base = 1, result = 0;

    if(str[0]=='0' && (str[1] == 'x' || str[1] == 'X'))
    {
        i = i + 2;
    }

    for(int j = n-1; j >= i; j--)
    {
        if(str[j] >= '0' && str[j] <= '9')
        {
            result = result + (str[j] - 48) * base;
            base = base * 16;
        }

        else if(str[j] >= 'A' && str[j] <= 'F')
        {
            result = result + (str[j] - 55) * base;
            base = base * 16;
        }

        else if(str[j] >= 'a' && str[j] <= 'f')
        {
            result = result + (str[j] - 87) * base;
            base = base * 16;
        }
    }

    return result;
}


int main()
{
    char str[100];
    scanf("%s",str);

    int length = 0;

    for(int i=0;str[i]!='\0';i++)
    {
         length++;
    }

    int result = h_to_i(str,length);

    printf("\n%d", result);
}
