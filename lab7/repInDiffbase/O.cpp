#include <bits/stdc++.h>
using namespace std;

int zn(int N, int K) {
    cout<<N/K;
    cout<<N%K;
}

char az(int N, int K){
    
    cout<<(N/K)+55;
    cout<<(N%K)+55;
}
int main()
{
    int n,k;
    cin>>n>>k;
    
    if(n/k<=9 && n%k<=9)
        zn(n,k);
    else
        az(n,k);

    return 0;
}