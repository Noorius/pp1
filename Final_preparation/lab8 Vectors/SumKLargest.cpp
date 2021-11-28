#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    int k,sum=0;
    cin>>k;
    sort(v.begin(),v.end());
    for(int i=n-1; k>0; i--,k--)
        sum+=v[i];
    cout<<sum;
    return 0;
}