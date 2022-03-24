#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string,greater<string>> s;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(b=="enter")
            s.insert(a);
        else
            s.erase(s.find(a));
    }
    for(auto a : s)
        cout<<a<<"\n";
}
