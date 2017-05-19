#include<stdio.h>
#include<stdbool.h>
int flipbits(bool arr[], int n)
{
	// For the example 0 0 0 1 0 1
	int i,origOnes=0,count=0;
	int value[10000];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			origOnes=origOnes+1;
			value[i]=1;
		}
		else if(arr[i]==0)
		{
		    value[i]=-1;
		    
		}
		//It now becomes -1 -1 -1 1 -1 1
		//Now Flip the bits and find maximum contiguous array 
	}
	    
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]==true)
	            count++;
	    }
	    if(count==n)
	    {
	        return count;
	    }
	    
	    
	        
		for(i=0;i<n;i++)
		{
			value[i] = -value[i];
		}
		
		//Now, the array becomes 1 1 1 -1 1 -1
		//Here comes the fun part, Just apply Kandane's algorithm 
		//and find the maximum contiguous sub-array
		int MaxSoFar=-99999, MaxEndingHere=0;
		for(i=0;i<n;i++)
		{
			MaxEndingHere = MaxEndingHere + value[i];
			if(MaxEndingHere>MaxSoFar)
				MaxSoFar = MaxEndingHere;
			if(MaxEndingHere<0)
				MaxEndingHere=0;
		}
		//Now we know maximum contiguous sub-array is from arr[0] to arr[4]
		//I guess we flip everything back to normal? no!
		//We know MaxSoFar right now is 3
		//Number of ones initially was 2
		//To get maximum number of ones, ass the original number of ones to MaxSoFar
		return (origOnes + MaxSoFar);
}
int main()
 {
        int a[10000];
        bool arr[10000];
    	int i,j,m,n,ans;
     	scanf("%d",&m);
     	
    	for(j=0;j<m;j++)
    	{
        	scanf("%d",&n);
        	for(i=0;i<n;i++)
        		scanf("%d",&a[i]);
        	for(i=0;i<n;i++)
        	{
        	    if(a[i]==1)
        	        arr[i]=1;
        	    else if(a[i]==0)
        	        arr[i]=0;
        	}
        	ans=flipbits(arr,n);
            printf("%d\n",ans);  
        }
      
	return 0;
}