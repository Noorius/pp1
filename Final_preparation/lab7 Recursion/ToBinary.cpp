#include <bits/stdc++.h>
using namespace std;

void Binary(int n){
    if(n==0)
        return ;
    Binary(n/2);
    cout<<n%2;
}

int main()
{
    int n;
    cin>>n;
    Binary(n);
    return 0;
}