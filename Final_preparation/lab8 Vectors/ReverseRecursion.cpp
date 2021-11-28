#include <bits/stdc++.h>
using namespace std;

void Rev(vector<int> v,int n){
    if(n==0)
        return ;
    cout<<v[n-1]<<" ";
    Rev(v,n-1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    Rev(v,n);

    return 0;
}