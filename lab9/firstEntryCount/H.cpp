#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string, int> m;
    map <string, int>::iterator it;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(m.find(s)!=m.end())
            continue;
        else if(m.find(s)==m.end())
            m[s]=i+1;
    }
    for(it=m.begin(); it!=m.end(); it++)
        cout<<(*it).first<<' '<<(*it).second<<endl;

    return 0;
}