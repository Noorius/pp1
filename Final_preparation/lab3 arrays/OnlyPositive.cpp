#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<(sizeof(a)/sizeof(a[0])); i++){
        if(a[i]>0)
            cnt++;
    }
    cout<<cnt;
    return 0;
}