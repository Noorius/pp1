#include <bits/stdc++.h>
using namespace std;


bool finder(int a[], int N, int K, int I)
{
    if(I==N)
        return false;
    if(a[I]==K)
        return true; 
    return finder(a,N,K,I+1);
}

int main()
{
    int n, k, i=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>k;
    cout<<(finder(a,n,k,i) ? "Yes" : "No");

    return 0;
}