#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int n;
int main()
{
    cin>>n;
    while(n--)
    {
        int s , e; cin>>s>>e;
        pq.push({e,s});
    }
    int temp = 0,cnt=0;
    while(!pq.empty())
    {
        int end_time = pq.top().first;
        int start_time = pq.top().second;
        pq.pop();
        if(start_time>=temp)
        {
            cnt++;
            temp = end_time;
        }
    }
    cout<<cnt;
}
