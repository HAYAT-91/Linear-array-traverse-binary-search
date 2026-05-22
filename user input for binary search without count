#include<stdio.h>
int main()
{
    int LA[100],n,target;
    printf("Enter n and Target: ");
    scanf("%d %d",&n,&target);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&LA[i]);
    }
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(LA[mid]==target)
        {
            printf("Found: %d",LA[mid]);
            return 0;
        }
        else if(LA[mid]<target)
        {
            low= mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    printf("Not found");
    return 0;
}
