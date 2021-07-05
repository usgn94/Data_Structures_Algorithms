class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        int n = arr.length();
        string output = arr;
        int count[27], i;
        memset(count, 0, sizeof(count));
      
        for (i = 0; arr[i]; ++i)
            ++count[arr[i]-'a'+1];
    
        for (i = 1; i <= 26; ++i)
            count[i] += count[i - 1]; // it gives the position of ith elemnt
    
        for (i = 0; arr[i]; ++i) {
            output[count[arr[i]-'a'+1] - 1] = arr[i];
            --count[arr[i]-'a'+1];
        }
            
        return output;
    }
};
//TC: O(n)
//SC: O(n)
