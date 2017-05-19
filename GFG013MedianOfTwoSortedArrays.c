#include<stdio.h>
int mergearrays(int* a, int* b, int n)
{
    int count=0, i=0, j=0;
    int m1=-1, m2=-1;
    for(count=0 ; count<=n ;count++)
    {
        //Case if all elements in a[] are less than b[]
        //median is (last element of a[] + first element of b[])/2
      if(i==n)
        {
            m1=m2;
            m2=b[0];
            break;
        }
        //Case if all elements of b[] are less than a[]
        //median is (first element of b[] + last element of a[])/2
        else if(j==n)
        {
            m1=m2;
            m2=a[0];
            break;
        }
    
        //printf("a[i]: %d\nb[j]: %d\n",a[i],b[j]);
        if(a[i]<b[j])
        {
            m1=m2;
            m2=a[i];
            i++;
        }
        else
        {
            m1=m2;
            m2=b[j];
            j++;
        }
        //printf("m1: %d\nm2: %d\n",m1,m2);
    }
    //printf("%d\n",m1+m2);
    return (m1+m2);
}

int main()
{
    int a[100000],b[100000];
    int t, iterations, i=0, j=0, m, n, result;
    scanf("%d",&iterations);
    for(t=0 ; t<iterations ; t++)
        {
            //printf("\nvalue of t:%d\n",t);
            scanf("%d",&n);
            for(i=0 ; i<n ; i++)
                scanf("%d",&a[i]);
            for(i=0 ; i<n ; i++)
                scanf("%d",&b[i]);
            result=mergearrays(a, b, n);
            printf("%d\n",result);
            
        }
    return 0;
}

//http://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays/0
//http://www.geeksforgeeks.org/median-of-two-sorted-arrays/