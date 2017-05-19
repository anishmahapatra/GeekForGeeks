#include<stdio.h>

int main()
 {
     int arr[100];
     int i=0,j=0,m=0,n=0, count=0, a=0, b=0,flag=0,num=0;
     scanf("%d",&m);
     for(j=0;j<m;j++)
         {  flag=0, count=0;
             scanf("%d",&n);
             for(i=0;i<n;i++)
             {
                 scanf("%d", &arr[i]);
             }
             for(a=0;a<n;a++)
             {
                 count=0;
                 for(b=0;b<n;b++)
                 {
                     if(arr[a]==arr[b])
                     {
                             count++;
                             if(count>(n/2))
                             {
                                 flag++;
                                 num=arr[a];
                             }
                     }
                 }
             }
             if(flag==0)
                 printf("NO Majority Element\n");
             if(flag!=0)
                printf("%d \n", num);
         }
        return 0;
}



OUTPUT:
Correct AnswerCorrect Answer
Execution Time:0.102