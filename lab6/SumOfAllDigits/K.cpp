#include <bits/stdc++.h>
using namespace std;

int Sum(string S, int I, int SUM)
{
    if(I==S.size())
        return SUM;
    SUM+=S[I]-'0';
    return Sum(S,I+1,SUM);
}

int main()
{
    string s;
    int i=0, sum=0;
    cin>>s;
    cout<<Sum(s,i,sum);

    return 0;
}