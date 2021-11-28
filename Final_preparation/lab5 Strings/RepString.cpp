#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,sub;
    cin>>t>>s;
    sub=t;
    for(int i=0; i<s.size()/t.size(); i++){
        if(s==sub){
            cout<<"YES";
            return 0;
        }
        sub+=t;
    }
    cout<<"NO";

    return 0;
}