string Solution::findDigitsInBinary(int A) {
 
   // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

vector<int> v;

int i;

string s="";

string s1="0";

if(A==0)
return s1;
 
 if(A>0)
  {
   
 while(A>0)
    
{
   
    v.push_back(A%2);
 
      A=A/2;
   
 }
  
  for(i=v.size()-1;i>=0;i--)
  
  {
       
 s=s+ to_string(v[i]);
  
  }
    
return s;

}

}
