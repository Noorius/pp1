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
    int k;
    cin>>k;
    for(int i=0; i<k; i++)
        cout<<v[i]<<" ";

    return 0;
}