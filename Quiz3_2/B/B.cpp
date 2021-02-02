#include <bits/stdc++.h>
using namespace std;

bool Find(int b[],int i, int n){   
    for(int t=0; t<n; t++){
        if((b[t]/10)==i)
            return true;
        else
            return false;
    }
}

int main()
{
    int n,coor;
    char a[8][8];
    int b[n];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>b[n];
    }


    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if((Find(b,i,n)==true) && (Find(b,j,n)==true))
                a[i][j]='*';
            else
                a[i][j]='0';
        }
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cout<<a[i][j];
        }
    }


    return 0;
}