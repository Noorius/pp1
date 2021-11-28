#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,sum1=0,sum2=INT_MAX,x=0;
    int a[r][c];
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
            sum1+=a[i][j];
            
        }
        if(sum1<sum2){
            sum2=sum1;
            x=i+1;
        }
        sum1=0;
    }
    cout<<x;

    return 0;
}