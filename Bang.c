#include <stdio.h>

/* bang - Compute !x without using !
*  Examples: bang(3)=0, bang(0)=1
*  Legal ops: ~ & ^ | + << >>
*  Max ops: 12
*/

int bang(int x)
{
    return (((x>>31) + ((~x+1)>>31))) + 1;
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("%d",bang(x));
}
