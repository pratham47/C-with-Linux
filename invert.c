#include <stdio.h>

/*
* Return x with the n bits that begin at position p inverted (i.e. turn 0
* into 1 and vice versa)
* and the rest left unchanged. Consider the indices of x to begin with the
* lower -order bit   numbered
* Legal ops: ~ & ^ | << >>
* as zero
*/

int invert(int x, int p, int n)
{
    int num;
    num = ~(~0<<n)<<p-1;
    return num^x;

}

int main()
{
    int x, p, n;
    scanf("%d %d %d",&x,&p,&n);

    printf("%d",invert(x,p,n));
}
