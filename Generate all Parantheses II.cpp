void helper(vector<string>& res,int A,string s,int i,int j)
{
    if(j==A)
    {
        res.push_back(s);
        return;
    }
    if(i>j)
    {
        helper(res,A,s+")",i,j+1);
    }
    if(i<A)
    helper(res,A,s+"(",i+1,j);
   
}


vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    helper(res,A,"",0,0);
    sort(res.begin(),res.end());
    return res;
}
