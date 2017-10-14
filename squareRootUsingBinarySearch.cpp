/*
Implement int sqrt(int x)
.

Compute and return the square root of x.


If x is not a perfect square, return floor(sqrt(x))

*/

int Solution::sqrt(int A) {
  
  // Do not write main() function.
 
   // Do not read input, instead use the arguments to the function.
    
// Do not print the output, instead return values as specified
    /
/ Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    int low=1,high=A/2;
  
 
    if(A==0)return A;

    else
   
 {

    while(low<=high)
   
 {
        
long mid=(low+high)/2;
 
       if(mid*mid<=A && (mid+1)*(mid+1)>A)return mid;

        else if(mid*mid<A)low=mid+1;

        else high=mid-1;
  
      
    
}
    
    
}


}
