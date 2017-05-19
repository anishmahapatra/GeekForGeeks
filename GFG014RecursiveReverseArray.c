#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void reversefunction(int* arr, int start, int end)
{
    int temp;
    if(start>=end)
        return;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reversefunction(arr, start+1, end-1);
}
int main()
{
    int arr[1000];
    int n,i,j,temp;
    scanf("%d",&n);
        j=n-1;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reversefunction(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}