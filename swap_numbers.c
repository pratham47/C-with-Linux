#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("\nEnter second number: ");
    scanf("%d",&num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nFirst Number = %d\n",num1);
    printf("Second Number = %d\n",num2);
}
