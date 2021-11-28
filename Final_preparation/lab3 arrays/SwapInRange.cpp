#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=l-1, j=r-1; i<j; i++, j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}