#include <bits/stdc++.h>
using namespace std;

void Cnt(const string& s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=(s[i]-'0');
    }
    cout<<sum;
}

int main()
{
    string s;
    cin>>s;
    Cnt(s);

    return 0;
}