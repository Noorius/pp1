#include <bits/stdc++.h>
using namespace std;

bool Luck(const string& s){
    int sum=0;
    for(int i =0; i<s.size(); i++){
        sum+=(s[i]-'0');
    }
    if(sum%(s[s.size()-1]-'0')==0)
        return true;
    else
        return false;
}

int main()
{
    string s;
    cin>>s;
    cout<<(Luck(s)?"Yes":"No");

    return 0;
}