#include <bits/stdc++.h>
using namespace std;

bool Validator(const string& s, const int& n){
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9')
            ++cnt;
    }
    if(cnt>=n)
        return true;
    else 
        return false;
}

int main()
{
    string s;
    int n;
    cin>>s>>n;
    cout<<(Validator(s,n) ? "YES" : "NO");


    return 0;
}