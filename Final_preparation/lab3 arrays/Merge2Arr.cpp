#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>k;
    int b[k];
    for(int i=0; i<k; i++){
        cin>>b[i];
    }
    int i=0, j=0, l=0, c[n+k];
    while(i<n && j<k){
        if(a[i]<b[j])
            c[l++]=a[i++];
        else
            c[l++]=b[j++];
    }
    while(i<n)
        c[l++]=a[i++];
    while(j<k)
        c[l++]=b[j++];

    for(int i=0; i<n+k; i++)
        cout<<c[i]<<" ";

    return 0;
}