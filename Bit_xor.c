#include <stdio.h>

/*
*  bitXor - x ^ y using only ~ and &
* Example bitXor(4, 5) = 1
* Legal ops:  ~ &
* Max ops: 14
*/

int Bit_xor(int x, int y)
{
    return ~(~(x&~y) & ~(~x&y));
}

int main()
{
    int x,y;

    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d",Bit_xor(x,y));
}
