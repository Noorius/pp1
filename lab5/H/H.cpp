#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int cnt,k=0;
    string s,t;
    cin>>s;
    t=s;

    sort(s.begin(),s.end());
    for(int i=0; i<s.size();){
        if(s[i]==s[i+1])
            s.erase(i+1,1);
        else if(s[i]!=s[i+1])
            i++;
    }

    int a[s.size()]; 

    for(int j='0'; j<='9'; j++){
        for(int i=0;i<t.size();i++){
            if(t[i]==j)
                cnt++;
        }
        if(cnt!=0)
            a[k++]=cnt;    
        cnt=0;
    }

    for(int i=1; i<s.size(); i++){
        if(a[i-1]!=a[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}