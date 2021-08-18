#include <stdio.h>

/*
* conditional - same as x ? y : z
* example conditional (2, 4, 5) = 4
* ! ~ & ^ | + << >>
* Max ops: 16
*/

int conditional(int x, int y, int z)
{
    x = ~!!x + 1;
    return (x & y) | (~x & z);
}

int main()
{
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);

    printf("%d",conditional(x,y,z));
}
