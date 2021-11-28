#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    string temp;
    for(int i=0; i<3; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout<<v[0];

    return 0;
}