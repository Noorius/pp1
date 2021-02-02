#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string t;
    char s;
    cin>>s>>t;
    for(int i=0; i<t.size();i++){
        if(t[i]==s){
            t.erase(i,1);
        }
    }
    cout<<t;

    return 0;
}