#include <bits/stdc++.h>
using namespace std;

int maxi(string S, int I, int MX)
{
    if(I==S.size())
        return MX-'0';
    if(MX<S[I+1])
        MX=S[I+1];
    return maxi(S,I+1,MX);
}

int main()
{
    string s;
    cin>>s;
    int i=0, mx=s[i];
    cout<<maxi(s, i, mx);
    return 0;
}