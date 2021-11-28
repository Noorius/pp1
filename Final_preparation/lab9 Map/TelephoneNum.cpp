#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0; i<n; i++){
        string t;
        cin>>t;
        m[t]++;
    }
    int cnt=0;
    for(const auto& c : m){
        if(c.second==3)
            cnt++;
    }
    cout<<cnt;
    return 0;
}