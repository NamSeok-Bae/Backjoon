#include <iostream>

using namespace std;

int n,dp[3],min_dp[3],a,b,c;
int temp1,temp2;

int main()
{
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        
        temp1 = dp[0]; temp2 = dp[2];
        dp[0] = max(dp[0],dp[1]) + a;
        dp[2] = max(dp[1],dp[2]) + c;
        dp[1] = max(temp1,max(dp[1],temp2)) + b;
        
        temp1 = min_dp[0]; temp2= min_dp[2];
        min_dp[0] = min(min_dp[0],min_dp[1]) + a;
        min_dp[2] = min(min_dp[1],min_dp[2]) + c;
        min_dp[1] = min(temp1,min(min_dp[1],temp2)) + b;
    }
    cout<<max(dp[0],max(dp[1],dp[2]))<<" "<<min(min_dp[0],min(min_dp[1],min_dp[2]));
}
