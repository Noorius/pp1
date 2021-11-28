#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    cin>>k;
    v.erase(v.begin()+k);
    for(const int& c : v)
        cout<<c<<" ";



    return 0;
}