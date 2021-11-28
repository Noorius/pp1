#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,x=0,y=0;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            if(i==j){
                if(max<a[i][j]){
                    max=a[i][j];
                    x=j+1;
                    y=i+1;
                }
            }
        }
    }
    cout<<"Maximum element is: "<<max<<" with coordinates: "<<x<<";"<<y;

    return 0;
}