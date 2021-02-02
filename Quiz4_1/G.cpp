#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l;
    vector<int> a;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        a.push_back(m);
    }

    cin>>m;
    for(int i=0; i<m; i++){
        cin>>l;
        a.push_back(l);
    }
    sort(a.begin(), a.end());

    for(int i=0; i<m+n; i++)
        cout<<a[i]<<" ";


    return 0;
}