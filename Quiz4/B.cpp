#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char> m;
    string s;
    cin>>s;
    for(int i=97,j=122; i<=122, j>=97; i++,j--){
        m[i]=j;
    }
    for(auto c : s){
        cout<<m[c];
    }
    return 0;
}