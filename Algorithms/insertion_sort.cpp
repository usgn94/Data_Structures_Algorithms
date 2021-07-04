void insert(int a[], int i)
{
    int key = a[i];
    int j=i-1;
    while(j>=0 && a[j]>key){
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = key;
    
}
//Function to sort the array using insertion sort algorithm.
void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++){
        insert(arr,i);
    }
}

//Time complexity O(n^2)
//Best case(already sorted) O(n)
