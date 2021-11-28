#include <bits/stdc++.h>
using namespace std;

bool Validator(const string& s){
    for(int i=0; i<s.size(); i++){
        if((s[i]-'0')%2!=0)
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    cout<<(Validator(s) ? "Valid" : "Not valid");


    return 0;
}