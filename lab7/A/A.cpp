#include <bits/stdc++.h>
using namespace std;
int degree(int n, int res){
    if(n==0)
        return res;
    degree(n-1, res*2);
}
int main()
{
    int n;
    cin>>n;
    int res=1;
    cout<<degree(n, res);

    return 0;
}