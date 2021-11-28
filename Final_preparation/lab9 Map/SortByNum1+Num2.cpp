#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    multimap<int,int> m;
    for(int i=0; i<n; i++){
        int n1,n2;
        cin>>n1>>n2;
        m.insert(make_pair(n1+n2,i+1));
    }
    for(const auto& c : m){
        cout<<c.second<<" ";
    }

    return 0;
}