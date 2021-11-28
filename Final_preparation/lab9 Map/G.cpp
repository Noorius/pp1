#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    deque<char> d;
    d.push_back(s[0]);
    for(int i=1; i<s.size(); i++){
        if(d.back()=='1' && s[i]=='1')
            d.pop_back(); 
        else
            d.push_back(s[i]);
    }
    while(!d.empty()){
        cout<<d.front();
        d.pop_front();
    }
    return 0;
}