#include <bits/stdc++.h>
using namespace std;

int F(int n,int pr1,int pr2,int cnt){
    if(n==1)
        return pr1;
    if(n==2)
        return pr2;
    int i=pr1+pr2;
    pr1=pr2;
    if(cnt==n)
        return i;
    return F(n,pr1,pr2=i,cnt+1);
}

int main()
{
    int n,pr1=0,pr2=1,cnt=3;
    cin>>n;
    cout<<F(n,pr1,pr2,cnt);

    return 0;
}