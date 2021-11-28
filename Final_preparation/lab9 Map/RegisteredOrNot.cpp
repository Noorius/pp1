#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(find(m.begin(),m.end(),s)==m.end()){
            m.push_back(s);
            cout<<"new user added"<<endl;
        }
        else
            cout<<"user already exists"<<endl;
    }

    return 0;
}