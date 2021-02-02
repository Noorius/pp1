#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int cnt = 0;
    cin >> t >> s;
    int pos;
    
    for(int i=0; i<s.size();){
        pos=s.find(t,i);
        if(pos!=string::npos)
            s.erase(pos,t.size());
        else
            i++;
    }
    if(s.size()>0){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    
    return 0;
}