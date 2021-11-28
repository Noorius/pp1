#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,pos;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==t) {
            cout<<i+1;
            return 0;
        }
        if(t>a[i])
            pos=i+1;
    }
    cout<<pos;
            


    return 0;
}