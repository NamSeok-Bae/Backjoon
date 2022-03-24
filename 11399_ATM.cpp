#include <iostream>
#include <algorithm>

using namespace std;

int n,arr[1001],dp[1001],ans;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    
    dp[0] = arr[0];
    for(int i=1;i<n;i++)
        dp[i] +=dp[i-1] + arr[i];
    
    for(int i=0;i<n;i++)
        ans += dp[i];
    
    cout<<ans;
}
