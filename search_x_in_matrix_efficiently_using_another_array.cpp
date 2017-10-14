/*
Write an efficient algorithm that searches for a value in an m x n matrix.


This matrix has the following properties:


Integers in each row are sorted from left to right.

The first integer of each row is greater than or equal to the last integer of the previous row.

Given target = 3, 

return 1 ( 1 corresponds to true )


Return 0 / 1 ( 0 if the element is not present,
 1 if the element is present ) for this problem

*/

int Solution::searchMatrix(vector<vector<int> > &A, int B)
 {
 
   // Do not write main() function.
  

vector<int> b;

int r=-1;

    for(int i=0;i<A.size();i++)
   
 {
  
      if(B>=A[i][0] && B<=A[i][A[0].size()-1])
   
     {
 
       r=i;
 
       break;
   
     }

    }

    if(r!=-1)

    {
 
   
     for(int j=0;j<A[0].size();j++)
  
   {
  
       b.push_back(A[r][j]);

     }
 
   
    int low=0,high=b.size()-1;
  
  while(low<=high)
 
   {
 
       int mid=low + (high-low)/2;
   
     if(b[mid]==B)return 1;

        else if(b[mid]>B)high=mid-1;
 
       else low=mid+1;

    }

    }

    return 0;



}
