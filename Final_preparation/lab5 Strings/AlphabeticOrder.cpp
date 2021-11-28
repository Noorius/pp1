#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t="";
    cin>>s;

    t=s;
    sort(s.begin(),s.end());
    if(s==t)
        cout<<"YES";
    else    
        cout<<"NO";

    /* for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
    }
    
    
     for(int i=0; i<s.size()-1; i++){
        if(s[i]>=s[i+1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"; */

    return 0;
}