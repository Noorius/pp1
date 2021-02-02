#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    string s,w="";
    getline(cin,s);

    for(int i=0; i<=s.size(); i++){
        if(s[i]==' ' || i==s.size()){
            m[w]++;
            w="";
        }
        else {
            w+=s[i];
        }
    }

    multimap< pair<int,string>,int> reverse;
    multimap< pair<int,string>,int>::reverse_iterator it;
    for(auto c : m)
        reverse.insert(make_pair(make_pair(c.second, c.first),0));

    for(it=reverse.rbegin(); it!=reverse.rend(); it++)
        cout<<(*it).first.second<<" : "<<(*it).first.first<<endl;

    return 0;
}