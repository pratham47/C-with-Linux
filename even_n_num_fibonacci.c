#include <stdio.h>

int even_fib(int n)
{
  if(n == 0 || n == 1)
    return n;

  return even_fib(n - 1) + even_fib(n - 2);
}

int main()
{
  int n;
  scanf("%d",&n);

  int i=0;
  while(n > 0)
  {
   int x = even_fib(i);

    if(x % 2 == 0 && x!=0)
    {
      printf("%d ",x);
      n--;
    }
    i++;
  }
}
