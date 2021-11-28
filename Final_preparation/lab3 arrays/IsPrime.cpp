#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=2;
    cin>>n;
    while(j<n){
        if(n%j==0){
            cout<<"No";
            return 0;
        }
        j++;
    }
    cout<<"Yes";
    return 0;
}