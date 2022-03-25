#include <iostream>
#include <queue>

using namespace std;

int n;
pair<int,int> arr[51];
int cnt[51];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==j)
                continue;
            
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
            {
                cnt[i]++;
            }
        }
        cout<<cnt[i]+1<<" ";
    }
}
