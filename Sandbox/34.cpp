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
    for(auto& i : v)
        cin>>i;

    sort(begin(v),end(v),[](const string& r,const string& l){
        return lexicographical_compare(begin(r),end(r),begin(l),end(l)[](char cr, char cl){
            return (tolower(cr)<tolower(cl));
        });
    });

    for (const string& s : v)
        cout << s << ' ';

    return 0;
}