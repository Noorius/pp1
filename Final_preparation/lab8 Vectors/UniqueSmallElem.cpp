#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> myset;
    set<char>::iterator it;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        myset.insert(s[i]);
    }
        
    cout<<myset.size()<<endl;
    for(it=myset.begin(); it!=myset.end(); it++)
        cout<<*it<<" ";
    return 0;
}