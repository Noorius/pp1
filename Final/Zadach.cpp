#include <bits/stdc++.h>
using namespace std;

bool DiagonalDownRight(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x+1][y+1] ) //&& x+1<r && y+1<c
        return true;
    else    
        return false;
}

bool DiagonalDownLeft(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x+1][y-1] ) //&& x+1<r && y-1>=0
        return true;
    else    
        return false;
}

bool DiagonalUpLeft(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x-1][y-1] ) //&& x-1>=0 && y-1>=0
        return true;
    else    
        return false;
}

bool DiagonalUpRight(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x-1][y+1] ) //&& x-1>=0 && y+1<c
        return true;
    else    
        return false;
}

bool Right(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x][y+1] ) //&& y+1<c
        return true;
    else    
        return false;
}

bool Left(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x][y-1]) //&& y-1>=0
        return true;
    else    
        return false;
}

bool Down(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x+1][y] ) //&& x+1<r
        return true;
    else    
        return false;
}

bool Up(int a[][100],int x,int y,int r, int c){
    if(a[x][y]==a[x-1][y] )//&& x-1>=0
        return true;
    else    
        return false;
}

bool Cool(int a[][100],int r, int c,int x, int y){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i+1<r && j+1<c){
                if(Right(a,i,j,r,c) && DiagonalDownRight(a,i,j,r,c) && Down(a,i,j,r,c))
                    return false;
            }
            if(i+1<r && j-1>0){
                if(Left(a,i,j,r,c) && DiagonalDownLeft(a,i,j,r,c) && Down(a,i,j,r,c))
                    return false;
            }
            if(i-1>0 && j-1>0){
                if(Left(a,i,j,r,c) && DiagonalUpLeft(a,i,j,r,c) && Up(a,i,j,r,c))
                    return false;
            }
            if(i-1>0 && j+1<c){
                if(Up(a,i,j,r,c) && DiagonalUpRight(a,i,j,r,c) && Right(a,i,j,r,c))
                    return false;
            }
            else
                continue;
        }
    }
    return true;
}


int main()
{
    int r=0,c=0,x=0,y=0;
    cin>>r>>c;
    if(r==1 && c==1){
        cout<<"YES";
        return 0;
    }
    int a[100][100];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>a[i][j];
        }
    }
    cout<<(Cool(a,r,c,x,y)?"YES":"NO");

    return 0;
}
//if((x>=0 && x<r) && (y>=0 && y<c))