/*
Minimum Characters required to make a String Palindromic.
You are given a string. The only operation allowed is to insert characters in the beginning of the string. How many minimum characters are needed to be inserted to make the string a palindrome string

Example:
Input: ABC
Output: 2
Input: AACECAAAA
Output: 2
*/

int Solution::solve(string A) 
{

    int len=A.length();
   
 int index_with_middle_element=-1,index_without_middle_element=-1;

    if(len==0||len==1)return 0;
  
  for(int i=1;i<len;i++)

    {
 
       string s1=A.substr(0,i);
  
      string s2=A.substr(i+1,i);
  
      string s3=A.substr(i,i);

        reverse(s3.begin(),s3.end());
   
     reverse(s2.begin(),s2.end());

        if(s1==s2)index_with_middle_element=i;
   
     if(s1==s3)index_without_middle_element=i;
 
   }
 
   if(index_with_middle_element==-1 &&index_without_middle_element==-1 )
return len-1;

   else if(index_with_middle_element==index_without_middle_element)

   return len-1-(2*index_with_middle_element);
  
  else
 
   {
    
    int ch_req1=len-1-(2*index_with_middle_element);
    
    int ch_req2=len-(2*index_without_middle_element);
  
      return min(ch_req1,ch_req2);
   
 }
}
