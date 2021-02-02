#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int, int> v;
    vector <int, int>::iterator it;

    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x+y,i));
    }
    sort(v[0],v[n-1]);

    for(int i=0; i<n; i++)
        cout<<v[i].second<<" ";
    return 0;
}