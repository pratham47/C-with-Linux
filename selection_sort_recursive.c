#include<stdio.h>

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int min_index(int arr[], int i, int j)
{
    if(i == j)
    {
        return i;
    }

    int min_indx = min_index(arr, i + 1, j);

    return (arr[i] < arr[min_indx]) ? i : min_indx;
}

void selection_sort_recursive(int arr[],int n,int index)
{
    if(index == n)
    {
        return;
    }
    int min_indx = min_index(arr, index, n-1);

    if(min_indx != index)
    {
        swap(arr, min_indx, index);
    }

    selection_sort_recursive(arr, n, index+1);
}

int main()
{
    int num;

    printf("Enter the number of elements: ");

    scanf("%d", &num);

    int arr[num];

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection_sort_recursive(arr,num,0);

    for(int i=0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}
