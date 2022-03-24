#include <iostream>

using namespace std;

int n,dp[31];

int main()
{
    cin>>n;
    dp[2] = 3;
    dp[4] = 11;
    for(int i=6;i<=n;i+=2)
    {
        dp[i] = dp[i-2]*4 - dp[i-4];
    }
    cout<<dp[n];
}
