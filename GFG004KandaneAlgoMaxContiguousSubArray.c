#include<stdio.h>
#include<climits>
int FindMaxContiguousSum(int arr[], int n)
{
    int i,MaxEndingHere=0, MaxSoFar=-1000;
    for(i=0;i<n;i++)
    {
        MaxEndingHere=MaxEndingHere+arr[i];
        if(MaxEndingHere>MaxSoFar)
            MaxSoFar=MaxEndingHere;
        if(MaxEndingHere<0)
            MaxEndingHere=0;
    }
    return MaxSoFar;
    
}
int main()
 {
     int arr[1000];
     int i,j,m,n,max;
     scanf("%d",&m);
     for(j=0;j<m;j++)
     {
         max=0;
         scanf("%d",&n);
         for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
         max=FindMaxContiguousSum(arr, n);
         printf("%d\n",max);
     }
	return 0;
}

Correct AnswerCorrect Answer
Execution Time:0.104

http://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
