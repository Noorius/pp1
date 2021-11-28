#include <bits/stdc++.h>
using namespace std;

int Almat(string s, int i){
    if(i==s.size())
        return 0;
    return (s[i]-48)/2+Almat(s,i+1);
}

int main()
{
    string s;
    int i=0;
    cin>>s;
    cout<<Almat(s,i);


    return 0;
}