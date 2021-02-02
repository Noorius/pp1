#include <bits/stdc++.h>
using namespace std;

int degree(int n){
    if(n==0){
        return 0;
    }
    degree(n/2);
    cout<<n%2;
}

int main()
{
    int n;
    cin>>n;
    degree(n);

    return 0;
}