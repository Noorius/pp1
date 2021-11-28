#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int pos;
    cin>>s>>t;
    pos=s.find(t);
    if(pos!=string::npos)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}