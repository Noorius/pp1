#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    int n;
    t=s;

    sort(s.begin(),s.end());
    for(int i=0; i<s.size();){
        if(s[i]==s[i+1]){
            s.erase(i+1,1);
        }
        else if(s[i]!=s[i+1])
            i++;
    }

    for(int i=0;i<s.size();i++){
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j])
                n++;
        }
        cout<<s[i]<<": "<<n<<endl;
        n=0;
    }


    return 0;
}