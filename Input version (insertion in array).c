#include<stdio.h>
int main()
{
    int arr[10];
    int n, k, value;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (k) and value: ");
    scanf("%d %d", &k, &value);

    int j = n - 1;
    n = n + 1;

    while(j >= k)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[k] = value;

    printf("After insertion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
