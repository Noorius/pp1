#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    set<char>s;
    for(int i=0; i<str.size();i++)
    {
        if(str[i]>='A' and str[i]<='Z')
            str[i]+=32;
        s.insert(str[i]);
    }
    cout<<s.size()<<endl;
    for(auto&item : s)
        cout<<item<<" ";

    return 0;
}