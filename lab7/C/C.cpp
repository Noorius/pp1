#include <bits/stdc++.h>
using namespace std;

bool findK(int l,int r,int a[], int k) {
    if (l<=r){
        int m = (l+r)/2;
        if(a[m]==k)
            return true;
        if(a[m]<k)
            return findK(m+1, r, a, k);
        return findK(l,m-1,a,k);
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<(findK(0, n-1,a,k)?"Yes":"No");

    return 0;
}