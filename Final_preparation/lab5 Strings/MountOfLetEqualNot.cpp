#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,cnt1=0;
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(t.size()!=s.size()){
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]!=t[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


    return 0;
}

/* 
if(s[i]==s[i+1])
            cnt++;
        else{
            if(cnt1==0){
                cnt1=cnt;
            }
            if(cnt1!=cnt){
                cout<<"NO";
                return 0;
            } 
            cnt=0;
        }
*/