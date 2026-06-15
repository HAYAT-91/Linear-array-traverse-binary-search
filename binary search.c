#include<stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};


    int target=40,count=0;
    int lower_bound=0,high=4;

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
