#include <bits/stdc++.h>
using namespace std;

void pos(string s, string r){
    for(int i=0; i<s.size(); i++){
        if(s.substr(i,r.size())==r){
            cout<<i<<" ";
        }
    }
}
int main()
{
    string s,r;
    cin>>s>>r;
    pos(s,r);
    return 0;
}