#include <bits/stdc++.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

string to_low(string& a){
    string s;
    for(auto& i : a){
        s.push_back(tolower(i));
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(auto& i : v){
        cin>>i;
    }

    sort(v.begin(), v.end(),[](string x, string y){
        return (to_low(x)<to_low(y));
    });

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}