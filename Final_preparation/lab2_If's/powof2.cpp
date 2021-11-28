#include <bits/stdc++.h>
using namespace std;

void Power(int n, int i){
    if(pow(2,i)>n)
        return ;
    cout<<pow(2,i)<<" ";
    return Power(n,i+1);
}

int main()
{
    int n,i=0;
    cin>>n;
    Power(n,i);
    return 0;
}