#include<stdio.h>
int OddNumber(int arr[], int n)
{
    int count,a,b;
    for(a=0;a<n;a++)
            {
                count=0;
                for(b=0;b<n;b++)
                {
                    if(arr[a]==arr[b])
                        count++;
                }
                if (count%2!=0)
                    return arr[a];
            }
            return 0;
}
int main()
 {
     int i,j,m,n,number;
     int arr[1000];
     scanf("%d",&m);
     for(j=0;j<m;j++)
     {
         scanf("%d",&n);
         for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        number=OddNumber(arr,n);
        printf("%d\n",number);
            
     }
     return 0;
}

Correct AnswerCorrect Answer
Execution Time:0.1

http://practice.geeksforgeeks.org/problems/find-the-odd-occurence/0