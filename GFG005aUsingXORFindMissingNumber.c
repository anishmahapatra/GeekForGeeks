#include<stdio.h>
int tryXOR(int arr[], int n)
{
    int i,j,num;
    int X1=1;
    int X2=arr[0];
    
    for(i=2;i<=n;i++)
        {
            X1=X1^i;
        }
    for(j=1;j<n-1;j++)
        {
            X2=X2^arr[j];
        }
    
    return(X1^X2);
}

int main()
 {
        int arr[1000];
        int i,j,m,n,num;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {   
            num=0;
            scanf("%d",&n);
            for(i=0;i<n-1;i++)
                scanf("%d",&arr[i]);
            num=tryXOR(arr, n);
            printf("%d\n",num);
        }
    return 0;
}

Correct AnswerCorrect Answer
Execution Time:0.187

http://practice.geeksforgeeks.org/problems/missing-number-in-array/0