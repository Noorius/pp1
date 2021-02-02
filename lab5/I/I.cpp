#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    int cnt,k=0;
    cin >> s >> t;
    
    int a[26];
    int b[26];

    for(int i='a'; i<='z'; i++){
        for(int j=0; j<s.size();j++){
            if(s[j]==i)
                cnt++;
        }
        a[k++]=cnt;
        cnt=0;
    }
    k=0;
    for(int i='a'; i<='z'; i++){
        for(int j=0; j<t.size(); j++){
            if(t[j]==i)
                cnt++;
        }
        b[k++]=cnt;
        cnt=0;
    }

    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    
    return 0;
}