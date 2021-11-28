#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0; i<n; i++){
        string s;
        int t;
        cin>>s>>t;
        m[s]+=t;
    }
    for(const auto& c : m)
        cout<<c.first<<" "<<c.second<<endl;
    return 0;
}