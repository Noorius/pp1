#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    long long a[n], sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;


    return 0;
}