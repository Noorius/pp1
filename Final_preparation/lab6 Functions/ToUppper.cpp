#include <bits/stdc++.h>
using namespace std;

void toUp(string& s){
    s[0]-=32;
    cout<<s;
}

int main()
{
    string c;
    cin>>c;
    if(c[0]>='a' && c[0]<='z')
        toUp(c);
    else    
        cout<<c;

    return 0;
}