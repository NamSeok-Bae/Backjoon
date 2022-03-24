#include <iostream>
#include <cstring>

using namespace std;

int n; int dp[1000001];

int main()
{
    cin >> n;
    for (int i = 0; i <= n; i++)
        dp[i] = 987654321;
    for (int i = n; i > 0; i--)
    {
        if (dp[i] == 987654321)
            dp[i] = 0;

        if (i % 3 == 0)
            dp[i / 3] = min(dp[i / 3], dp[i] + 1);
        if (i % 2 == 0)
            dp[i / 2] = min(dp[i / 2], dp[i] + 1);
        dp[i - 1] = min(dp[i - 1], dp[i] + 1);
    }
    cout << dp[1];
}
