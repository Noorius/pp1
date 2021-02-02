#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string s,t,u;

    cin>>s;
    
    bool k=true,z=true,l=true;
    t=s;
    u=s;

    for(int i=0, j=s.size()-1; i<j; i++, j--){
            if(s[i]!=s[j])
            l=false;
    }
    if(l==true){
        cout<<"YES";
        return 0;
    }

    sort(s.begin(),s.end());
    for(int i=0; i<s.size();){
        if(s[i]==s[i+1])
            s.erase(i+1,1);
        else if(s[i]!=s[i+1])
            i++;
    }

    if(s.size()>2){
        cout<<"NO";
        return 0;
    }
    else if(s.size()<=2){
        t=t+s[0];
        u=u+s[1];
        for(int i=0, j=t.size()-1; i<j; i++, j--){
            if(t[i]!=t[j])
                k=false;
        }
        for(int i=0, j=u.size()-1; i<j; i++, j--){
            if(u[i]!=u[j])
                z=false;
        }
    }

    if(k==true || z==true)
        cout<<"YES";
    else if(k==false && z==false)
        cout<<"NO";

    return 0;
}