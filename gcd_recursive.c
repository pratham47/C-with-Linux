#include <stdio.h>

int gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b ,a%b);
}

int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);

    int ans = gcd(a,b);

    printf("Gcd of %d and %d is %d", a, b, ans);
}
