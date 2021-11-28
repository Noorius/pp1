#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        m[t]++;
    }
    int cnt=0;
    for(const auto& c : m){
        if(c.second>=2)
            cnt++;
    }
    cout<<cnt;

    return 0;
}