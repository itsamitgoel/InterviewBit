vector<int> Solution::allFactors(int A) {

    vector<int> vec1;
    vector<int> vec2;
    int i;
    
for(i=1;i<=sqrt(A);i++){

        if(A%i==0)
        
{

            vec1.push_back(i);

       
        if(i!=sqrt(A))
 
       {
 
           vec2.push_back(A/i);

        }}
    }
   
 for(i=vec2.size()-1;i>=0;i--)
    {

        vec1.push_back(vec2[i]);

    }
    return vec1;
    
}