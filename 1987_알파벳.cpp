#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

int n,m,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},ans;
char arr[21][21];
bool check[27];

void dfs(int y, int x,int cnt)
{
    ans = max(ans,cnt);
    
    for(int i=0;i<4;i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny >=0 && ny<n && nx>=0 && nx<m && check[arr[ny][nx]-'A']==false)
        {
            check[arr[ny][nx]-'A'] = true;
            dfs(ny,nx,cnt+1);
            check[arr[ny][nx]-'A'] = false;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    
    check[arr[0][0]-'A'] = true;
    dfs(0,0,1);
    cout<<ans;
}
