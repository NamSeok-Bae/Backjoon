#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int t,n,arr[2][100001];
long long dp[2][100001],ans;

int main()
{
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp)); ans = 0;
        cin>>n;
        for(int i=0;i<2;i++)
            for(int j=1;j<=n;j++)
                cin>>arr[i][j];
        
        dp[0][1] = arr[0][1]; dp[1][1] = arr[1][1];
        ans = max(dp[0][1],dp[1][1]);
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(j==0)
                {
                    dp[j][i] = max(dp[j+1][i-1]+arr[j][i], dp[j+1][i-2]+arr[j][i]);
                }
                else
                {
                    dp[j][i] = max(dp[j-1][i-1]+arr[j][i],dp[j-1][i-2]+arr[j][i]);
                }
                if(i==n)
                    ans = max(dp[j][i],ans);
            }
        }
        cout<<ans<<"\n";
    }
}
