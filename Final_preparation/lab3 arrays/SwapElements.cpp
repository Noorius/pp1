#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0, j=(sizeof(a)/sizeof(a[0]))-1; i<j; i++, j--){
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    return 0;
}