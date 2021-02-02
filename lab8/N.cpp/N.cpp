#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        s.insert(t);
    }

    for(auto &item : s)
    {
        if(item % 2==1)
            cout<<item<<" ";
    }
    return 0;
}