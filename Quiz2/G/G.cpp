#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int j=0;j<s.size(); j++){
        for(int i=j+1; i<s.size();i++){
            if(s[j]==s[i+1]){
                cout<<s[j];
                break;
            }
        } 
    }  


    return 0;
}