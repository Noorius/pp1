#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    n*=2;
    if(n>k){
        while(n>0){
            n-=k;
            cnt++;
        }
    }
    else{
        while(k>=0){
            k-=n;
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}