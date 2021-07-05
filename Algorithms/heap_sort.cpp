class Solution
{
    public:
   
    void heapify(int a[], int n, int i) {
    // Find largest among root, left child and right child
        int left = 2*i + 1;
        int right = 2*i + 2;
        int largest = i;
        if(left <n && a[left] > a[i] )largest =left;
        if(right<n && a[right] > a[largest]) largest = right;
        
        if(largest != i){
            swap(a[largest], a[i]);
            heapify(a,n,largest);
        }
    }


    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    
        for(int i= (n/2 - 1);i>=0;i--) heapify(arr,n,i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        while(n>1){
            swap(arr[0], arr[n-1]);
            n--;
            heapify(arr,n,0);
        }
    }
};

/*
Analysis of Time Complexity

Heapify:
This function can recur at max to the height of the tree which is ceil(logn -1)
Hence its complexity is O(n)
Build_Max_Heap:
for level 1 heapify is O(1)
    level 2            O(2)
    ...
level 1 has (n/4) nodes ->(n/4)O(1)
level 2     (n/8)       ->(n/8)O(2)
level 3     (n/16)      ->(n/16)O(3)
......
T(n) = (n/4)(1) + (n/8)(2) +..........1(ceil(logn - 1))
let (n/4) = 2^k  => log(n/4)base2 = k => *k = logn - 2*
T(n) = 2^k(1/2^0 + 2/2^1 + 3/2^2 +.....+ (k+1)/2^k)
By using AGP (Arithmetic Geometric Progression)
T(n) = 2^k(1/2/(1-1/2)^2)
     =2^k(2) = n/2
 T(n) = O(n)
 
 heap_sort:
build_heap ->O(n)
calls heapify n-1 times ->O(nlogn)
overall compexity  = O(nlogn)

*/
