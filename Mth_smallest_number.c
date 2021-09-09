#include <stdio.h>
#include <stdlib.h>

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int l, int h)
{
    int pivot = arr[h], i = l;

    for(int j = l; j <= h - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            swap(arr,i,j);
            i++;
        }
    }
    swap(arr,i,h);
    return i;
}

int q_select(int arr[],int n,int m)
{
    int l = 0, h = n - 1;

    while( l <= h)
    {
      int loc = partition(arr,l,h);
       if(loc == m-1)
       {
         return loc;
       }
       else if(loc > m - 1)
       {
           h = loc -1;
       }
       else
       {
           l = loc +1;
       }
    }

    return 0;
}

int main()
{
    int n,m;

    printf("Enter the number of elements you want to enter\n");
    scanf("%d",&n);
    printf("Enter the mth smallest number you want to find\n");
    scanf("%d",&m);

    int arr[n];

    printf("enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   printf("Mth smallest number is: %d",arr[q_select(arr,n,m)]);
   }

