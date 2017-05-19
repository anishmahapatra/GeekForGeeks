#include<stdio.h>
int ReturnMissingNumber(int arr[], int n)
{
    int i,j,sum=0,currsum=0,ans;
    for(j=0;j<=n;j++)
    {
        sum=sum+j;
    }
    for(i=0;i<n-1;i++)
    {
        currsum+=arr[i];
    }
    ans=sum-currsum;
    return ans;
}
int main()
 {
     int arr[1000];
     int res,m,n,i,j;
     scanf("%d",&m);
     for(j=0;j<m;j++)
     {
         scanf("%d",&n);
         for(i=0;i<n-1;i++)
            scanf("%d",&arr[i]);
        res=ReturnMissingNumber(arr,n);
        printf("%d\n",res);
     }
	return 0;
}

Correct AnswerCorrect Answer
Execution Time:0.083

http://practice.geeksforgeeks.org/problems/missing-number-in-array/0