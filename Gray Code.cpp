void helper(int A,int &num,vector<int> &ans)
{
   if(A == 0)
   {
       ans.push_back(num);
       return;
   }
   helper(A-1,num,ans);
   num = num ^(1 <<(A-1));
   helper(A-1,num,ans);
}


vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> ans;
    int num = 0;
    helper(A,num,ans);
    return ans;
    
}
