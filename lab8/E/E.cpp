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
    int l,r;
    cin>>l>>r;

    v.erase(v.begin()+l,v.begin()+r+1);


    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}