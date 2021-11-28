#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    //reverse(a,a+n);
    for(int i=0, j=n-1; i<n; i++, j--){
        if(a[i]!=a[j])
            cout<<"Instead of "<<a[i]<<" here was "<<a[j]<<endl;
        else
            cout<<"OK"<<endl;
    }


    return 0;
}