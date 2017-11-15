/*Length of Last Word
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Given s = "Hello World",

return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.
*/
int Solution::lengthOfLastWord(const string &A) {
  
  
         int len=A.length();

         int count=0,flag=0;

         for(int i=len-1;i>=0;i--)
 
        {
 
            char c=A.at(i);
 
            if(c!=' ')
    
         {
      
       count+=1;
     
        flag=1;
 
        }
   
      else if(flag==1)break;

         }
 
        
    return count;

}

