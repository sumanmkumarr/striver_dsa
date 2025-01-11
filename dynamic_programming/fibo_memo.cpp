// memoization is used to store the value of subproblem so that ,that could be used if again that subproblem occur throughout the process
#include<iostream>
#include<vector>
using namespace std;

int fibo(int n, vector<int> &dp)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    return dp[n];
}
int main()
{
   int n;
   cin>>n;
   vector<int> dp(n+1, -1);
   cout<<fibo(n,dp);

   return 0;
}


// Time complexity: O(n)
// Space complexity: O(n)