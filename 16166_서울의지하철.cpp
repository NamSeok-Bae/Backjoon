#include <iostream>
#include <map>

using namespace std;

map<pair<int,int>,int> m1;
map<int,int> m2;
int main()
{
    int n,f;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m; cin>>m;
        for(int j=0;j<m;j++)
        {
            int a; cin>>a;
            m1[{i,j}] = a;
            m2[a] = i;
        }
    }
    cin>>f;
    int ans = -1;
    for(auto a: m1)
    {
        if(a.second == f)
        {
            f = m2[f];
        }
    }
}
