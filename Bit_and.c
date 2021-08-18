#include <stdio.h>

/*
*  bitAnd - x & y using only ~ and |
* Example bitAnd(6, 5) = 4
* Legal ops:  ~ |
* Max ops: 8
*/

int Bit_and(int x, int y)
{
     return ~(~x | ~y);
}

int main()
{
    int x,y;

    scanf("%d",&x);
    scanf("%d",&y);

    printf("%d",Bit_and(x,y));
}
