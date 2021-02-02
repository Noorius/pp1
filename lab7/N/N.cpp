#include <bits/stdc++.h>
using namespace std;

bool isCheater(int a[], int n, int k, int i)
{
    if(i==n-1)
        return false;
    if(abs(a[i]-a[i+1])<=k)
        return true;
    return isCheater(a,n,k,i+1);
}
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<(isCheater(a,n,k,0) ? "cheater": "no");


    return 0;
}