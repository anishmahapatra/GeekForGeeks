#include<stdio.h>

int SumPossible(int arr[], int n, int X)
{
    int a,b;
    int flag=-1;
    for(a=0;a<n;a++)
    {
        for(b=0;b<n;b++)
        {
            if((arr[a]+arr[b])==X)
                {
                    flag++;
                    return flag;
                    break;
                }
            flag=-1;
            
        }
    }
    return -1;
}
int main()
 {
     int arr[1000];
     int i,j,m,n,X,pos;
     scanf("%d",&m);
     for(j=0;j<m;j++)
     {
         scanf("%d",&n);
         scanf("%d",&X);
         for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        pos=SumPossible(arr,n,X);
        if(pos!=-1)
            printf("Yes\n");
        else 
            printf("No\n");
     }
    //code
    return 0;
}

Correct AnswerCorrect Answer
Execution Time:0.082
http://practice.geeksforgeeks.org/problems/key-pair/0