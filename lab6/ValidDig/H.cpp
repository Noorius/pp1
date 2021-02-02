#include <bits/stdc++.h>
using namespace std;
bool valid(string S, int I)
{
    if(S[I]%2!=0)
        return false;
    if(I==S.size())
        return true;
    return valid(S,I+1);
}
int main()
{
    string s;
    int i=0;
    cin>>s;
    cout<<(valid(s,i) ? "Valid":"Not valid");
    return 0;
}