/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */

/* Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} */

void insert(int arr[], int i)
{
    int hole,value;
    value=arr[i];
    hole=i;
    while(hole>0&&arr[hole-1]>value
)        {
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
    arr[hole]=value;
}
