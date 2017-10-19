/*Find out the maximum sub-array of non negative numbers from an array.

The sub-array should be continuous. 
That is, a sub-array created by choosing the second and fourth element and skipping the third element is invalid.


Maximum sub-array is defined in terms of the sum of the elements in the sub-array.
 Sub-array A is greater than sub-array B if sum(A) > sum(B).

*/

vector<int> Solution::maxset(vector<int> &A) {

 /*   int sum_so_far=0,sum_ending_here=0,start,end=0,s=0,count=0,j=0,i,ends=0;
    vector<vector<int>> arr;
    vector<int> result;
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
        {
          s=s+1;
        sum_ending_here+=A[i];
        if(sum_so_far<=sum_ending_here)
        {
            
        end=i;
        sum_so_far=sum_ending_here;
        count=s;
        }   
        }
        
         if(A[i]<0)
        
        {
            sum_ending_here=0;
            
            if(i==0)continue;
            else
            {
            if(A[i-1]>=0)
            {
            arr[j][0]=sum_so_far;
            arr[j][1]=count;
            arr[j][2]=i-count;
            arr[j][3]=i-1;
            j=j+1;
            }}
            s=0;
            sum_so_far;
        }
        if(i==A.size()-1 &&A[A.size()-1]>=0 )
        {
         if(A[i-1]>=0)
            {
            arr[j][0]=sum_so_far;
            arr[j][1]=count;
            arr[j][2]=i-count+1;
            arr[j][3]=i;
            j=j+1;
            }   
        }
        
    
    }
    for(i=1;i<arr.size();i++)
    { 
        int max=arr[0][0];
        int counts=arr[0][1];
        start=arr[0][2];
         ends=arr[0][3];
        if(arr[i][0]>max)
        {
            max=arr[i][0];
         counts=arr[i][1];
         start=arr[i][2];
        ends=arr[i][3];
        }
        else if(arr[i][0]==max)
        {
            if(arr[i][1]>counts)
            {
               max=arr[i][0];
         counts=arr[i][1];
         start=arr[i][2];
        ends=arr[i][3];  
            }
            else if(arr[i][1]==counts)
            {
                if(arr[i][2]<start)
                {
                  max=arr[i][0];
         counts=arr[i][1];
         start=arr[i][2];
        ends=arr[i][3];   
                }
            }
        }
    }
    for(i=start;i<=ends;i++)
    result.push_back(A[i]);
    return result;
    
}

*/

int N = A.size();

    
    long long mx_sum = 0;
       
 long long cur_sum = 0;
     
   int mx_range_left = -1;
     
   int mx_range_right = -1;
     
   int cur_range_left = 0;
    
    int cur_range_right = 0;

 
       while(cur_range_right < N) 
{
         
   if(A[cur_range_right] < 0)
 {
         
       cur_range_left = cur_range_right + 1;
           
     cur_sum = 0;
           
 }
 else
 {
            
    cur_sum += (long long)A[cur_range_right];
            
    if(cur_sum > mx_sum)
 {
                 
   mx_sum = cur_sum;
               
     mx_range_left = cur_range_left;
                   
 mx_range_right = cur_range_right + 1;

                }
 else if(cur_sum == mx_sum)
 {
                    
if(cur_range_right + 1 - cur_range_left > mx_range_right - mx_range_left) 
{
                       
 mx_range_left = cur_range_left;
                       
 mx_range_right = cur_range_right + 1;
                 
   }
             
   }
       
     }
       
     cur_range_right++;
     
   }
   
     vector<int> ans;
      
  if(mx_range_left == -1 || mx_range_right == -1)
            
    return ans;

      
  for(int i = mx_range_left; i < mx_range_right; ++i)
              
  ans.push_back(A[i]);
      
  return ans;

    }

