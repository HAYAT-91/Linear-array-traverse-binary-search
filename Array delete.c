#include<stdio.h>
int main()
{
   int arr[]={10,20,30,40,50};
   int k=1,n=5;
   int j=k;
   while(j<n)
   {
       arr[j]=arr[j+1];
       j++;
       
   }
   n--;
   for(int i=0;i<n;i++)
   {
       printf("%d",arr[i]);
   }

   return 0;
}
