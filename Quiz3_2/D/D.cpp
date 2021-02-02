#include <bits/stdc++.h>
using namespace std;

int kib(int n, int k){
    if(n<=1)
        return n;
    return kib(n-2,k)+k*kib(n-1,k);
}

int main()
{
    int n,k,a1=0,a2=1;
    cin>>n>>k;
    cout<<kib(n,k);

    return 0;
}