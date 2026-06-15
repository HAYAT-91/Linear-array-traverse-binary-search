#include<stdio.h>
int main()
{
    int LA[100];
    int n,target,count=0;

    scanf("%d%d",&n,&target);


    for(int i=0;i<n;i++)
    {
        scanf("%d",& LA[i]);
    }

    int lower_bound=0,high=n-1;

      while(lower_bound<=high)
    {

        int mid=(lower_bound+high)/2;
        if(LA[mid]==target)
        {
         printf("found=%d ", LA[mid]);
         count++;
         break;
        }
        else if(LA[mid]<target)
        {
            lower_bound=mid+1;
        }
        else
        {

            high=mid-1;
        }
    }


    if(count==0)
        {
         printf("not found");
        }


    return 0;
}
