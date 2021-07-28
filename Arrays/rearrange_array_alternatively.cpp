/*
Given a sorted array of positive integers. 
Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value,
third should be second max, fourth should be second min and so on.
*/

void rearrange(long long *a, int n) 
{ 
  long long min_index = 0,max_index = n-1;
  long long k = a[n-1]+1;

  for(long long i=0;i<n;i++){
      if(i%2 == 0){
          a[i] = a[i] + (a[max_index]%k)*k;
          max_index--;
      }
      else{
          a[i] = a[i] + (a[min_index]%k)*k;
          min_index++;
      }
  }
  for(long long i=0;i<n;i++){
      a[i] = a[i]/k;
  }

}
/*
IDEA:
for those who didn't get even after seeing the solution , i'll explain the core idea (which will help me remember too)

art of storing two number in a single number
lets take two numbers a and b
if we take a larger number greater then a and b ,called c ,then we can use a single number to get both a and b

by the no. k = a+b*c=arr[i]
if need a then k%c
if need b then k/c;
here we are storing 2 numbers at one index by this
,we don't lose the orignal as arr[i]%c will give us our orignal no., 
and arr[i]/c will give us multiplied no(other number we have stored i.e b).
remember this arr[i]%c is our orignal number

For example in {1 2 3 4 5 6 7 8 9}, max_element is 10(or any greater number ,than every array element) 
and we store 91 at index 0. With 91, we can get original element as 91%10 and new element as 91/10
*/
