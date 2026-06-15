#include<stdio.h>
int main()
{
    int arr[] = {10,20,30,40,50}; // extra space
    int k = 0, value = 5;//k=0,1,2,3,4,5
    int n = 5;

    int j = n - 1;
    n = n + 1;

    while(j >= k)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[k] = value;

    for(int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}

   

 






