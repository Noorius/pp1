#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,max2=INT_MIN;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]>max)
                max=a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>max2 && a[i][j]<max)
                    max2=a[i][j];
        }
    } 
    if(max2==INT_MIN)
        cout<<0;
    else
        cout<<max2;

    return 0;
}