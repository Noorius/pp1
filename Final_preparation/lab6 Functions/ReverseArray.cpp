#include <bits/stdc++.h>
using namespace std;

void Rev(int a[],const int& n){
    for(int i=0,j=n-1; i<j; i++, j--){
        int t = a[i];
        a[i]=a[j];
        a[j]=t;
    }
}

void Fill(int a[],const int& n){
    for(int i=0; i<n; i++)
        cin>>a[i];
}

void Print(int a[],const int& n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    Fill(a,n);
    Rev(a,n);
    Print(a,n);

    return 0;
}