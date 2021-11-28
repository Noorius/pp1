#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    map<int,int> m;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        m[t]++;
    }
    cout<<m[k];

    return 0;
}