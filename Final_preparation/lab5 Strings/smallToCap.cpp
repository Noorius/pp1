#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(auto& c : s){
        if(c>='a' && c<='z')
            c-=32;
    }
    cout<<s;

    return 0;
}