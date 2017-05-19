#include<stdio.h>
void rotatebyn(int* arr, int n, int rot)
{
    int i,j,temp;
    for(j=0; j<rot; j++)
    {
        temp=arr[0];
        for(i=0; i<n; i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}
int main()
{
    int t,i, iterations, n, rot, arr[10000];
    scanf("%d",&iterations);
    for(t=0;t<iterations;t++)
    {
        scanf("%d",&n);
        scanf("%d",&rot);
        for(i=0;i<n;i++)
            scanf("%d ",&arr[i]);
        rotatebyn(arr, n, rot);
        for(i=0 ;i<n ;i++)
            printf("%d ",arr[i]);
            printf("\n");
    }
    return 0;
}