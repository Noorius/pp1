#include <bits/stdc++.h>
using namespace std;

void Fill(int a[],int n){
    for(int i=0; i<n; i++)
        cin>>a[i];
}

void Substraction(const int a[], const int b[],const int& n){
    for(int i=0; i<n; i++){
        if(a[i]>b[i])
            cout<< a[i]-b[i]<<" ";
        else
            cout<< b[i]-a[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    Fill(a,n);
    Fill(b,n);
    Substraction(a,b,n);


    return 0;
}