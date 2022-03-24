#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
vector<int> v2;

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>> a;
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++)
    {
        int left = 0;
        int right = v.size()-1;
        int cnt =0;
        while(left<=right)
        {
            int mid = (left+right)/2;
            
            if(v2[mid-1] == v[i])
            {
                cnt++;
                break;
            }
            
            if(v2[mid-1] > v[i])
                right = mid -1;
            else
                left = mid+1;
        }
        cout<<cnt<<" ";
    }
    
}
