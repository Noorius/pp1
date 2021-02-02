#include <bits/stdc++.h>
using namespace std;

void fillSet(set<string> &s, int n) {
    if(n==0)
        return;
    string s1;
    cin>>s1;
    s.insert(s1);
    fillSet(s,n-1);
}

void check(set<string> &s, int m, set<string> &notGroup){
    if(m==0)
        return;
    string s2;
    cin>>s2;
    if(s.find(s2)==s.end())
        notGroup.insert(s2);
    if(s.find(s2)!=s.end())
        s.erase(s2);
    check(s, m-1,notGroup);
}

int main()
{
    int n,m;
    cin>>n;
    set<string> s;
    set<string> notGroup;
    set<string>::iterator it;
    fillSet(s,n);

    cin>>m;
    check(s,m, notGroup);

    cout<<"Missed students:"<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<"- "<<(*it)<<" "<<endl;
    cout<<"Not in the group:"<<endl;
    for(it=notGroup.begin();it!=notGroup.end();it++)
        cout<<"- "<<(*it)<<" "<<endl;

    

    return 0;
}