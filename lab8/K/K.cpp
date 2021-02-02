#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int k,sum=0;
    cin>>k;
    sort(v.rbegin(), v.rend());

    for(int i=0; i<k; i++)
    {
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}