#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int n,m,cnt;
unordered_map<int,int> m1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(1)
    {
        m1.clear();cnt =0;
        cin>>n>>m;
        if(n==0 && m==0)
            break;
        for(int i=0;i<n;i++)
        {
            int a; cin>>a;
            m1[a]++;
        }
        for(int i=0;i<m;i++)
        {
            int a; cin>>a;
            if(m1[a]==1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
}

/* ÀÌºÐÅ½»ö
#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(1)
    {
        cin>>n>>m;
        if(n == 0 && m ==0)
            break;
        int cnt =0;
        v.clear();
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;

            int left = 0;
            int right = v.size()-1;
            while(left<=right)
            {
                int mid = (left+right)/2;

                if(v[mid]==a)
                {
                    cnt++;
                    break;
                }
                if(v[mid] > a)
                {
                    right = mid -1;
                }
                else
                    left = mid +1;
            }
        }
        cout<<cnt<<"\n";
    }
}

*/