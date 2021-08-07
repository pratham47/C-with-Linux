#include <stdio.h>
#include <stdlib.h>

void reverse(int array[], int n)
{
    int i, j;

    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main()
{
    int n;

    scanf("%d",&n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    reverse(array,n);

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
}
