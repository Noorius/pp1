#include <bits/stdc++.h>
using namespace std;

bool Cheat(int a[], int i, int n, int k){
    if(i==n-1)
        return false;
    if(abs(a[i]-a[i+1])<k)
        return true;
    Cheat(a,i+1,n,k);
}

int main()
{
    int n,k,i=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<(Cheat(a,i,n,k)?"cheater":"no");

    return 0;
}