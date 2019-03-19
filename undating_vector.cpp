vector<int> Solution::plusOne(vector<int> &A) {
    if(A[A.size()-1]!=9)
    {
        A[A.size()-1] = A[A.size()-1]+1;
        while(*(A.begin())==0)
        {
            A.erase(A.begin());
        }
        return(A);
    }
    else{
        int i=0;
        while(A[A.size()-1-i] == 9)
        {   A[A.size()-1-i]=0;
            i++;
            if(i==A.size())
            {
                break;
            }
        }
        if(i==A.size())
        {
            A.insert(A.begin(),1);
        }
        else{
            A[A.size()-1-i]  = A[A.size() -1 -i] + 1;
        }
        while(*(A.begin())==0)
        {
            A.erase(A.begin());
        }
        return(A);   
    }
 
 
 
 
 
 
 
 
 
    
}
