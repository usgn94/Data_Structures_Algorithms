
/*
Blunder Mistakes: 
if(low < high){
            int pivot = partition(arr,low,high); 
           quickSort(arr,low,pivot-1);
           quickSort(arr,pivot+1, high);
  }
  
  Note that in line2 we have to give high as pivot-1 not pivot 
  If we give pivot it goes for infinite loop
  
*/
class Solution
{
    public:
   
    
    void quickSort(int arr[], int low, int high)
    {
        if(low < high){
            int pivot = partition(arr,low,high);
           quickSort(arr,low,pivot-1);
           quickSort(arr,pivot+1, high);
        }
      
    }
    
    public:
    int partition (int a[], int low, int high)
    {
       // Your code here
       int pivot = a[high];
       int i = low-1;
       ///cout<<i<<" ";
       for(int j=low; j< high;j++){
           if(a[j] < pivot){
               i++;
               swap(a[i],a[j]);
           }
       }
       swap(a[i+1], a[high]);
       return i+1;
    }
    
};
