#include <bits/stdc++.h>
using namespace std;

int Binary(int n,int i){
    if(i==0)
        return 1;
    return (n%2)*pow(2,i)+Binary(n/2,i-1);
}

int main()
{
    int n,i=3;
    cin>>n;
    cout<<Binary(n,i);

    return 0;
}