#include <bits/stdc++.h>
using namespace std;

int Zero(int t){
    int cnt=0;
    if(t==0)
        return 0;
    if(t%10==0)
        cnt++;
    return cnt+Zero(t/10);
}

int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        cnt+=Zero(t);
    }
    cout<<cnt;

    return 0;
}