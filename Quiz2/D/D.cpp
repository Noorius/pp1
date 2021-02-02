#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int cnt=0,siz;
    string s;
    cin>>s;
    siz=s.size();
    for(int i=0, j=s.size()-1; i<j; i++,j--){
        if(s[i]!=s[j]){
            cout<<s.size();
            return 0;
        }
    }
    for(int i=0; i<s.size()-cnt; i++)
        s.erase(s.size()-1, 1);
        cnt++;
        for(int i=0, j=s.size()-1; i<j; i++,j--){
            if(s[i]!=s[j]){
                cout<<siz-cnt;
                return 0;
        }
    }
    cout<<0;

    return 0;
}