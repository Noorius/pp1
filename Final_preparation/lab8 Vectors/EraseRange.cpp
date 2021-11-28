#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    int l,r;
    cin>>l>>r;
    v.erase(v.begin()+l,v.begin()+r+1);
    for(const int& c : v)
        cout<<c<<" ";



    return 0;
}