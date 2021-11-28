#include <bits/stdc++.h>
using namespace std;

void Manip(string& s){
    for(int i=0; i<s.size(); i++){
        if(i%2==0 && s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
}

int main()
{
    string s;
    cin>>s;
    Manip(s);
    cout<<s;

    return 0;
}