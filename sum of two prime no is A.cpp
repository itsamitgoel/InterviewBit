vector<int> Solution::primesum(int A) {
    vector<bool> isprime(A+1,true);
    
    vector<int> d;
    
    
    int i,j,min1=0,min2=0;
    
    isprime[0]=false;
    isprime[1]=false;
    for(i=2;i<=sqrt(A);i++)
    {
        if(isprime[i])
        {
            for(j=2;i*j<=A;j++)
            isprime[i*j]=false;
        }
    }
    
    for(i=2;i<=A/2;i++)
    {
  
            if(isprime[i] && isprime[A-i])
            {
               
               d.push_back(i);
               d.push_back(A-i);
               
               break;
            }
            
        
    }
   
return d ;
    
}
