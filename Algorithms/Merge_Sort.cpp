class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int i=l,j=0,k=0;
         int n1 = m-l+1;
         int n2 = r-m;
         int left[n1],right[n2];
         
         for(int i=0;i<n1;i++){
             left[i] = arr[l+i];
         }
         for(int i=0;i<n2;i++){
             right[i] = arr[m+1+i];
         }
         
         while(j<n1 && k<n2){
             if(left[j] < right[k]){
                 arr[i] = left[j];
                 j++;
             }
             else{
                 arr[i] = right[k];
                 k++;
             }
             i++;
         }
         while(j<n1){
             arr[i] = left[j];
             i++;j++;
         }
         while(k<n2){
             arr[i] = right[k];
             k++;i++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r){
            int m = (l+r)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            
            merge(arr,l,m,r);
        }
        
    }
};
