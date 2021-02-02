#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> V, int K, int I)
{
    if(V[I]==K)
        return true;
    if(I==V.size())
        return false;
    return f(V,K,I+1);
}

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
    int k,i=0;
    cin>>k;
    cout<<(f(v,k,i) ? "Yes" : "No");

    return 0;
}