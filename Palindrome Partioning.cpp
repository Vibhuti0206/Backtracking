bool checkp(string A,int s,int e)
{
    
    while(s<e)
    {
        if(A[s] !=A[e])
           return false;
        s++;
        e--;
    }
    return true;
}
void helper(string A,int i,vector<vector<string>> &ans,vector<string> temp)
{
    if(i==A.length())
    {
        ans.push_back(temp);
        return;
    }
    
    for (int j = i; j < A.length(); ++j) {
        if (checkp(A, i, j)) 
        {
            temp.push_back(A.substr(i, j - i + 1));
             helper(A,j + 1,ans,temp);
             temp.pop_back();
         }
             }
        
        
        
    
}



vector<vector<string> > Solution::partition(string A) {
   vector<vector<string>> ans;
   vector<string> temp;
   helper(A,0,ans,temp);
   return ans;
}
