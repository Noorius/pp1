#include <bits/stdc++.h>
using namespace std;

void F(int n, int k){
    if(n==0){
        return ;
    }
    F(n/k,k);
    if(n%k>9)
        cout<<(char)('A'+n%k-10);
    else
        cout<<n%k;
}

int main()
{
    int n,k;
    cin>>n>>k;
    F(n,k);


    return 0;
}