#include <bits/stdc++.h>
using namespace std;

bool Check(int a){
    if(a<0)
        a*=-1;
    if(a<2)
        return false;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,j=2;
    cin>>n;
    int a[n];
    vector<int> v(n);
    for(auto& c : v)
        cin>>c;
    cout<<count_if(v.begin(),v.end(),Check);


    return 0;
}