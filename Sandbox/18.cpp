#include <bits/stdc++.h>
using namespace std;

vector<int> Get(vector<int>& v){
    for(auto& c : v)
        cin>>c;
    return v;
}


vector<int> Reversed(const vector<int>& v){
    vector<int> result;
    for(int i=v.size()-1; i>=0; i--){
        result.push_back(v[i]);
    }
    return result;
}

void Print(const vector<int>& v){
    for(auto& c : v)
        cout<<c<<" ";
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    Print(Reversed(Get(v)));
    return 0;
}