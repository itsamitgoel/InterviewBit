/*Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/
public class Solution
 {

	public int isPalindrome(String a) 
{
	  
  int len=a.length();
	
    String a1=a.toLowerCase();



	    int l=0;

	    int h=len-1;

	    while(l<h)
	 
   {
	   
     char c1=a1.charAt(l);
	 
       char c2=a1.charAt(h);
	 
       while((!((c1>='a'&& c1<='z')||(c1>='0'&& c1<='9')))&& (l+1<len))
	        
{
	            l=l+1;
	     
       c1=a1.charAt(l);

	        }
	 
       
	         while((!((c2>='a'&& c2<='z')||(c2>='0'&& c2<='9')))&&(h-1>-1))
	
         {

	             h=h-1;
	
             c2=a1.charAt(h);
	  
       }
	        
if(h<l)return 1;
	 
       if(a1.charAt(l)!=a1.charAt(h))return 0;
	 
       else
	        
{
	         
   l++;h--;

	        }
	    }

	    return 1;

	}

}
