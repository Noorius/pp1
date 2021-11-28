#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cap=0,sm=0;
    cin>>s;
    for(const auto& c : s){
        if(c>='A' && c<='Z')
            cap++;
        else    
            sm++;
    }
    cout<<sm<<" "<<cap;

    return 0;
}