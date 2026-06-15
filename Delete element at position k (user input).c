#include<stdio.h>
int main()
{
    int arr[100];
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (k): ");
    scanf("%d", &k);

    int j = k;

    while(j < n - 1)
    {
        arr[j] = arr[j + 1];
        j++;
    }

    n--;

    printf("After deletion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
