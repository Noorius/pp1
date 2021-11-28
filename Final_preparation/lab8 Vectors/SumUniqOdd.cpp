#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(t%2!=0)
            s.insert(t);
    }
    for(const int& c : s)
        cout<<c<<" ";
    return 0;
}