vector<int> Solution::sieve(int A) {

    vector<int> a(A+1);

    vector<int> b;

    int i,j;
    
for(i=0;i<=A;i++)
 
   {

        a[i]=1;
 
   }

    a[0]=0;

    a[1]=0;

    for(i=2;i<=sqrt(A);i++)

    {

        if(a[i]==1)

        {
 
       
          
  for(j=2;i*j<=A;j++)

            a[i*j]=0;
     
       
        }

    }

    for(i=0;i<=A;i++)
 
   {
 
       if(a[i]==1)
 
       b.push_back(i);
  
  }

    return b;

    
}
