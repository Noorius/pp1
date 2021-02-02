#include <bits/stdc++.h>
using namespace std;

bool finder(string S, int I, int K)
{
    if(S[I]>=48 && S[I]<=57)
        K=K-1;
    if(I==S.size()) {
        if(K>0)
             return false;
        else if(K<=0)
            return true;
    }
    return finder(S,I+1,K);
}

int main()
{
    string s;
    int k,i=0;
    cin>>s>>k;
    cout<<(finder(s,i,k) ? "YES":"NO");


    return 0;
}