#include <bits/stdc++.h>
using namespace std;

void print(const vector<char>& v){
    for(const auto& c : v)
        cout<<c;
}

int main()
{
    string s;
    vector<char> v;
    cin>>s;
    for(auto c : s)
        v.push_back(c);
    sort(begin(v),end(v));
    cout<<"The anagram variants for string "<<s<<" are:"<<endl;
    do {
        print(v);
        cout<<endl;
    } while (next_permutation(v.begin(),v.begin()+v.size()));


    return 0;
}