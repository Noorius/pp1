#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(m.find(s)==m.end())
            m[s]=i+1;
    }
    for(auto& c : m)
        cout<<c.first<<" "<<c.second<<endl;

    return 0;
}