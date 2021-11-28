#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,x,y;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(a[i][j]>max){
                max=a[i][j];
                x=i+1;
                y=j+1;
            }
                
        }
    }
    cout<<x<<" "<<y;

    return 0;
}
