#include <bits/stdc++.h>
using namespace std;

bool isPrime(int t)
{
    if(t==1)
        return false;
    for(int i=2; i<sqrt(t); i++)
        if(t%i==0)
            return false;
    return true;
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
    int l,cnt=0;
    cin>>l;
    for(int i=0; i<n; i++){
        if(v[i]>l and isPrime(v[i]))
            cnt++;
    }

    cout<<cnt;
    return 0;
}