#include <bits/stdc++.h>
using namespace std;

bool p(string S, int I, int J)
{
    if(S[I]!=S[J])
        return false;
    if(I>J)
        return true;
    return p(S,I+1, J-1);
    return true;
}

int main()
{
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    cout<<(p(s,i,j) ? "Yes":"No");

    return 0;
}