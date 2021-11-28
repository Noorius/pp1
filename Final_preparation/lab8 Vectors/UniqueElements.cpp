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
        if(find(v.begin(),v.end(),t)==v.end())
            v.push_back(t);
    }
    cout<<v.size();

    return 0;
}