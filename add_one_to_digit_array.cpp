/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
For example, for this problem, following are some good questions to ask :
Q : Can the input have 0�s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
A : For the purpose of this question, YES
Q : Can the output have 0�s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

*/

vector<int> Solution::plusOne(vector<int> &A) {

   int i,j,carry=1,temp;

   vector<int> b;

   vector<int> c;
   

   
    
  
  
    for(i=A.size()-1;i>=0;i--)

    {
    
    b.push_back(A[i]);
  
  }
 
   j=b.size()-1;

    while(b[j]==0)

    {

        b.pop_back();

        j--;
  
      if(b.size()==0)
  
      {
  
          c.push_back(1);
 
           return c;
   
     }

    }
  
  
    for(i=0;i<b.size();i++)
 
   {

    temp=b[i];
 
   b[i]=(temp+carry)%10;
    
carry=(temp+carry)/10;

    }

    if(carry==1)
 
   b.push_back(1);

    
    for(i=b.size()-1;i>=0;i--)

    {

        c.push_back(b[i]);

    }
   
 return c;
   
 

}
