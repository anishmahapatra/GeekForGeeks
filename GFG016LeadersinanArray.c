#include<stdio.h>
void leaders(int* arr, int n)
{
    int i, j, count;
   // for(i=0 ; i<n ; i++)
   //       printf("\narr[%d]=%d\t",i,arr[i]);
   count=0;
   
    for(i=0 ;i<n-1 ;i++)
    {
        //printf("Inside first for loop:\ni=%d\n",i);
        for(j=i+1 ;j<n ;j++)
        {
            //printf("Inside first for loop:\ni=%d\tj=%d\n",i,j);
            if(arr[i]>arr[j])
                count++;
            //printf("count=%d\n",count);
        }
        //printf("\n\n%d-%d-1\n",n,i);
        //printf("count=%d\n   %d",count,arr[i]);
        if(count==n-i-1)
            printf("%d ",arr[i]);
        count=0;
    }
            printf("%d \n",arr[n-1]);
}
//for(i=0 ; i<n ; i++)
        //printf("\narr[%d]=%d\t",i,arr[i]);
int main()
{
    int t, iterations, arr[10000], i, n;
    scanf("%d",&iterations);
    for(t=0; t<iterations; t++)
    {
        scanf("%d",&n);
    for(i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);
    leaders(arr, n);
    }
    return 0;
}