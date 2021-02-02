#include <bits/stdc++.h>
using namespace std;
string Upp(string S)
{
    for(int i=0; i<S.length(); i+=2)
    {
        if(S[i]>=97 && S[i]<=122)
            S[i]-=32;
    }
    return S;
}
int main()
{
    string s;
    cin>>s;
    cout<<Upp(s);
    return 0;
}