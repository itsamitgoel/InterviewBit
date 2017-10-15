/*
Find the contiguous subarray within an array 
(containing at least one number)
 which has the largest sum.


For example:

Given the array [-2,1,-3,4,-1,2,1,-5,4],


the contiguous subarray [4,-1,2,1] has the largest sum = 6.


For this problem, return the maximum sum.
*/

int Solution::maxSubArray(const vector<int> &A)
 {
 
   
    int maxsofar=-pow(2,31),maxendinghere=0;

    for(int i=0;i<A.size();i++)
 
   {
   
     maxendinghere+=A[i];
   
     if(maxsofar<maxendinghere)maxsofar=maxendinghere;

        if(maxendinghere<0)maxendinghere=0;
  
  }
 
   return maxsofar;


}



