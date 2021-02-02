#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    t=s;
    const char* r,l,b,f;
    r="R";
    l="L";
    b="B";
    f="F";
    for(int i=0; i<t.size();i++){
        if(t[i]==l)
            t[i]=r;
        if(t[i]==f)
            t[i]=b;
    }
    for(int i=0, j=t.size(); i<j; i++, j--){
        if(t[i]!=t[j])
        cout<<"Chill Yelnur";
    }

    for(int i=0; i<s.size();i++){
        if(s[i]==b)
         cout<<f;
        if(s[i]==f)
         cout<<b;
        if(s[i]==r)
         cout<<l;
        if(s[i]==l)
         cout<<r;
    }


    return 0;
}