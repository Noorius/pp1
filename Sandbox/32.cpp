#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>num;
        a[i]=num;
    }
    sort(a,a+n,[](int x, int y){
        if(x<0)
            x*=-1;
        if(y<0)
            y*=-1;
        return (x<y);
    });

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}