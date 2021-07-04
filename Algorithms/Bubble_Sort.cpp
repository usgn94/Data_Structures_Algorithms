
void bubbleSort(int a[], int n)
{
    for(int i=0;i<n;i++){
      bool isSwapped = false;
        for(int j=0;j<(n-1-i);j++){
            if(a[j]> a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
              isSwapped = true;
            }
        }
      if(isSwapped)break;
    }
}

//worst time complexity O(n)
//Best time complexity O(1)

