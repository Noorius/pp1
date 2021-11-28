#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int l, int r, int a[], int k){
    if(l<=r){
        int m=(l+r)/2;
        if(a[m]==k)
            return true;
        if(a[m]<k)
            return BinarySearch(m+1,r,a,k);
        return BinarySearch(l,m-1,a,k);
    }
    return false;
}

void Fill(int a[],int n){
    for(int i=0; i<n; i++)
        cin>>a[i];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    Fill(a,n);
    int k;
    cin>>k;
    cout<<(BinarySearch(0,n-1,a,k)?"Yes":"No");


    return 0;
}