#include <bits/stdc++.h>
using namespace std;

void foo(int N, vector<int> &v){
    v.push_back(N%2);
    N/=2;
    if(N==0)
        return;
    foo(N,v);
}

int main()
{
    int N;
    cin>>N;
    vector<int> v;
    vector<int>::reverse_iterator it;
    foo(N,v);
    for(it=v.rbegin();it!=v.rend();it++)
        cout<<*it;
    return 0;
}