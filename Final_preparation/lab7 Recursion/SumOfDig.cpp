#include <bits/stdc++.h>
using namespace std;

int Sum(string s,int i){
    if(i==s.size())
        return 0;
    return (s[i]-'0')+Sum(s,i+1);
}

int main()
{
    string s;
    int i=0;
    cin>>s;
    cout<<Sum(s,i);

    return 0;
}