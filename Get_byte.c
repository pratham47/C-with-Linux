#include<stdio.h>

/*
* getByte - extract byte n from word x
* Examples: getByte(0x12345678, 1)  = 0x56
* Legal ops: ! ~ & ^| + << >>
* Max ops: 6
*/

int get_byte(int x, int n)
{
    return (x >> (n << 3)) & 0xff;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);

    printf("%d", get_byte(x,n));
}
