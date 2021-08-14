#include<stdio.h>
#include<stdlib.h>

#define ll long long int

ll merge(ll arr[], int start, int mid, int end, ll arr2[])
{ int i = start, j = mid, k = start;
  ll inv_count = 0;

    while((i <= mid - 1) && (j <= end))
    {
        if(arr1[i] <= arr2[j])
        {
            arr2[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
           arr2[k] = arr1[j];
           k++;
           j++;
        }
        inv_count += (mid - i);
    }

    while(i <= mid-1)
    {
        arr2[k] = arr1[i];
        k++;
        i++;
    }

    while( j <= end)
    {
        arr2[k] = arr1[j];
        k++;
        j++;
    }

    for(i = start; i <= end; i++)
    {
        arr1[i] = arr2[i];
    }

    return inv_count;
}

int merge_sort(ll arr1[], int start, int end, ll arr2[])
{
    int inv_count = 0;
    if(start < end)
    {
        int mid = (start + end) / 2;

        inv_count += merge_sort(arr1, start, mid, arr2);
        inv_count += merge_sort(arr1, mid+1, end, arr2);

        inv_count += merge(arr1, start, mid + 1, end, arr2);
    }
    return inv_count;
}

int main()
{
    int num;
    scanf("%d",&num);

    ll arr1[num], arr2[num];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

   int inv_count =  merge_sort(arr1, 0, num, arr2);

    printf("%d",inv_count);
}
