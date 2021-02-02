#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> ev;
    vector <int> od;
    for(int i=0, j; i<n; i++){
        cin>>j;
        if(j%2==0)
            ev.push_back(j);
        if(j%2!=0)
            od.push_back(j);
    }
    sort(ev.rbegin(), ev.rend());
    sort(od.begin(), od.end());

    for(int i=0; i<ev.size(); i++)
        cout<<ev[i]<<" ";

    for(int i=0; i<od.size(); i++)
        cout<<od[i]<<" ";

    
    return 0;
}