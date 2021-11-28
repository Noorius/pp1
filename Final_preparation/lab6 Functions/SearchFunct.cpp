#include <bits/stdc++.h>
using namespace std;

bool Search(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(x==a[i])
            return true;
    }
    return false;
}

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cin>>x;
    cout<<(Search(a,n,x) ? "Yes" : "No");

    return 0;
}