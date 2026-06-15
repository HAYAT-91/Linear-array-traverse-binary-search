#include <stdio.h>

int main() 
{
    int n;
    int LA[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",& LA[i]);
    }
   for(int i=0;i<n;i++)
   {
       printf("%d ",LA[i]);
   }
    return 0;
}
