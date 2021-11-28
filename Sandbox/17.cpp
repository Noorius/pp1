#include <bits/stdc++.h>
using namespace std;

void Reverse(vector<int>& v){
    int t;
    for(int i=0; i<v.size()/2; i++){
        t=v[i];
        v[i]=v[v.size()-i-1];
        v[v.size()-i-1]=t;
    }
}

int main()
{
    vector<int> numbers={1,8, 5, 90, 4, 1,2};
    Reverse(numbers);
    for(auto c : numbers){
        cout<<c<<" ";
    }
    return 0;
}