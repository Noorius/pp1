#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,left=0, top=0;
    cin>>n;
    int right=n-1, bottom=n-1;
    int a[n][n];
    if(n%2!=0)
        a[n/2][n/2]=n*n;
    for(int i=0;i<n/2; i++){
        for(int j=left; j<=right; j++)
            a[top][j]=++k;
        top++;
        for(int j=top; j<=bottom; j++)
            a[j][right]=++k;
        right--;
        for(int j=right; j>=left; j--)
            a[bottom][j]=++k;
        bottom--;
        for(int j=bottom; j>=top; j--)
            a[j][left]=++k;
        left++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}