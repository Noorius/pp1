#include <bits/stdc++.h>
using namespace std;

void out(string s, int i, vector<char> &v){
    if(s[i]>=65 && s[i]<=90) {
        if(v.size()==0)
           v.push_back(s[i]); 
    }
    if(i==s.size())
        return;
    out(s,i+1,v);
}

int main()
{
    string s;
    int i=0;
    vector<char> v;
    cin>>s;
    out(s,i,v);

    if(v.size()==0) {
        cout<<"-1";
        return 0;
    }
    else
    {
        cout<<v[0];
    }
    

    return 0;
}