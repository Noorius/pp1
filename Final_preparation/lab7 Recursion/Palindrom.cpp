#include <bits/stdc++.h>
using namespace std;

bool P(string s,int i){
    if(i==s.size())
        return true;
    if(s[i]!=s[s.size()-i-1])
        return false;
    P(s,i+1);
}

int main()
{
    string s;
    int i=0;
    cin>>s;
    cout<<(P(s,i)?"Yes":"No");

    return 0;
}