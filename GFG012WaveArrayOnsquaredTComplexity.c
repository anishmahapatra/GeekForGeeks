#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
void wavearray(int* arr,int n)
{
    int i=0,temp;
    for(i=0;i<n-1;i+=2)
    {
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
 {  
        int arr[1000];
        int i,j,m,n,t,iterations;
        scanf("%d",&iterations);
        for(t=0;t<iterations;t++)
        {
            scanf("%d",&n);
            for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
            sort(arr,arr+n);
            wavearray(arr,n);
            printf("\n");
            
       }
    return 0;
    
}