#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, cnt=0;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
            if(a[i][j]<0)
                cnt++;
        }
    }
    cout<<cnt;

    return 0;
}