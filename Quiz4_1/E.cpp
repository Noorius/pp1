#include <bits/stdc++.h>
using namespace std;

void mapping(map<string, pair<string, string>& m, string s) {
    string w="";
    for(int i=0; i<=s.size(); i++){
        if(s[i]=='-' || i==s.size()){
            
            w="";
        }
        else
            w+=s[i];
    }
    m.insert(make_pair(year,make_pair(month,day)));
}

int main()
{
    map<string, pair<string,string> > m;
    int n;
    string s;
    cin>>n;
    for(int i=0; i<n; i++){
        getline(cin,s);
        mapping(m,s);
    }   
    for(const auto& c : m)
        cout<<c.first<<'-'<<c.second.first<<'-'<<c.second.second<<endl;

    return 0;
}