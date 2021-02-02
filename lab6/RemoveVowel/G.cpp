#include <bits/stdc++.h>
using namespace std;

void UtoL(string &S, int I)
{
    S[I]+=32;
}

string Delete(string T, string S, int I, int J)
{
    if(S[I]==65 || S[I]==69 || S[I]==73 || S[I]==79 || S[I]==85)
        UtoL(S,I);
    if(S[I]!=97 || S[I]!=101 || S[I]!=105 || S[I]!=111 || S[I]!=117)
        T[J++]=S[I];
    if(I==S.size())
        return T;
    return Delete(T,S,I+1,J);
}

int main()
{
    string s,t;
    int i=0, j=0;
    getline(cin,s);
    cout<<Delete(t,s,i,j);

    return 0;
}