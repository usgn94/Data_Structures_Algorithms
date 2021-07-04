int select(int a[], int i)
{
    
    int max_index =i;
    for(int j=i-1;j>=0;j--){
        if(a[j] > a[max_index]){
            max_index = j;
        }
    }
    return max_index;
}


void selectionSort(int a[], int n)
{
  for(int i=n-1;i>0;i--){
      int max_index= select(a,i);
      int temp = a[max_index];
      a[max_index] = a[i];
      a[i] = temp;
  }
}
//TC - O(n^2)
