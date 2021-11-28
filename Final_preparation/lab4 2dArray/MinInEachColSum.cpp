#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,sum=0,min=INT_MAX,x=0;
    cin>>r>>c;
    int a[c][r];    

    for(int j=0; j<r; j++){
        for(int i=0; i<c; i++){
            cin>>a[i][j];
        }
    }
    
    cout<<"coordinates of min elements:"<<endl;
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(min>a[i][j]){
                min=a[i][j];
                x=j;
            }
        }
        sum+=min;
        cout<<x+1<<";"<<i+1<<endl;
        min=INT_MAX;
    }
    cout<<"Their sum:"<<endl<<sum;

    return 0;
}