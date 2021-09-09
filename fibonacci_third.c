#include<stdio.h>

void fibonacci(int first, int second, int num)
{
    int third;
    for(int i=2; i < num * 3; i++)
    {
        third = first + second;

        if(( i + 1 ) % 3 ==0 )
        {
           printf("%d ",third);
        }
        first = second;
        second = third;
    }
}

int main()
{
    int first = 1, second = 1, num;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    fibonacci(first ,second, num);
}
