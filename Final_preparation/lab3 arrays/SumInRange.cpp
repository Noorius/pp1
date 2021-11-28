#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    long long sum=0;
    cin>>n>>l>>r;
    long long a[n];
    for(int i=0; i<=n; i++){
        cin>>a[i];
        if(l-1<=i && i<=r-1)
            sum+=a[i];
    }
    cout<<sum;

    return 0;
}