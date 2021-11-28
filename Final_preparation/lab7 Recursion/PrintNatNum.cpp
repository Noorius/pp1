#include <bits/stdc++.h>
using namespace std;

void Pr(int n){
    if(n==1){
        return ;
    }
    Pr(n-1);
    cout<<n-1<<" ";
}

int main()
{
    int n;
    cin>>n;
    Pr(n+1);

    return 0;
}