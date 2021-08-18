#include <stdio.h>

/*
* sign - return 1 if positive, 0 if zero, and -1 if negative
* Examples: sign(130) = 1, sign(-23) = -1
* Legal ops: ! ~ & ^ | + << >>
* Max ops : 10
*/

int sign(int n)
{
    return ((!!n) | (n >> 31));
}


int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",sign(n));
}
