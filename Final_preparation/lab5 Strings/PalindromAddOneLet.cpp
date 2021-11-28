#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string s){
    for(int i=0, j=s.size()-1; i<j; i++, j--){
        if(s[i]!=s[j])
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    if(isPalindrom(s)){
        cout<<"YES";
        return 0;
    }
    if(isPalindrom(s+s[0])){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    
    return 0;
}