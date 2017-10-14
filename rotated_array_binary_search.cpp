/*
Suppose a sorted array A is rotated at some pivot unknown to you beforehand.


(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).


Find the minimum element.


The array will not contain duplicates.
*/

int Solution::findMin(const vector<int> &A)
 {

    // Do not write main() function.

    // Do not read input, instead use the arguments to the function.
    
// Do not print the output, instead return values as specified
    
// Still have a doubt. 
Checkout www.interviewbit.com/pages/sample_codes/ for more details

int low=0,high=A.size()-1,n=A.size();

while(low<=high)

{

    
    if(A[low]<=A[high])return A[low];
 
   int mid= low + (high-low)/2;
  
  int prev=(n+mid-1)%n,next=(mid+1)%n;

     if(A[prev]>=A[mid] && A[next]>=A[mid])return A[mid];
 
    else if(A[mid]<=A[high]) high=mid-1;
 
    else if(A[mid]>=A[low]) low=mid+1;

}

return -1;

}
