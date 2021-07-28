/*
Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 
*/

void reverse(int arr[], int i , int j){    
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}
void rotateArr(int arr[], int d, int n){
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);

}
