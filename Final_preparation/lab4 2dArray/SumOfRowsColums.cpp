#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,sumrow=0;
    cin>>r>>c;
    int a[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
            sumrow+=a[i][j];
        }
        cout<<"The sum of row number "<<i+1<<" is "<<sumrow<<endl;
        sumrow=0;
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            sumrow+=a[j][i];
        }
        cout<<"The sum of column number "<<i+1<<" is "<<sumrow<<endl;
        sumrow=0;
    }

    return 0;
}