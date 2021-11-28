#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    sort(v.begin(),v.end());
    cout<<v[n-1]-v[0];

    return 0;
}