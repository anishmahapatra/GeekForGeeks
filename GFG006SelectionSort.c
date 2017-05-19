/* The task is to complete select() which is used 
   as shown below to implement selectionSort() */

/* A function to implement selection sort
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
 */

int select(int arr[], int i)
{
    int j,iMin;
    iMin=i;
        for(j=i-1;j>0;j--)
        {
            if(arr[iMin]>arr[i])
                iMin=i;
        }
    return iMin;
    
    
}
