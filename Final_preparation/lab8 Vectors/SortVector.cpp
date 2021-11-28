#include <bits/stdc++.h>
using namespace std;

void Sort(vector<int>& v, int n){
    if(n<0)
        return ;
    Sort(v,n-1);
    for(int i=n+1; i<v.size(); i++){
        if(v[n]>v[i]){
            int t=v[n];
            v[n]=v[i];
            v[i]=t;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector <int> v(n); 
    for(int& c : v)
        cin>>c;
    Sort(v,n);
    for(int& c : v)
        cout<<c<<" ";
    return 0;
}