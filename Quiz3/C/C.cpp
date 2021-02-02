#include <bits/stdc++.h>
using namespace std;


void Fill(char a[][10], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
}

int Left(char a[][10], int n, int x, int y, int cnt){
    if(a[x][y]=='*' || x==n || y==n)
        return 0;
    if(a[x][y]=='.')
        return 1+Left(a,n,x-1,y,cnt);
}

int Right(char a[][10], int n, int x, int y, int cnt){
    if(a[x][y]=='*' || x==n || y==n)
        return 0;
    if(a[x][y]=='.')
        return 1+Right(a,n,x+1,y,cnt);
}

int Up(char a[][10], int n, int x, int y, int cnt){
    if(a[x][y]=='*' || x==n || y==n)
        return 0;
    if(a[x][y]=='.')
        return 1+Up(a,n,x,y-1,cnt);
    
}

int Down(char a[][10], int n, int x, int y, int cnt){
    if(a[x][y]=='*' || x==n || y==n)
        return 0;
    if(a[x][y]=='.')
        return 1+Down(a,n,x,y+1,cnt);
}

int main()
{
    int n, x, y, cnt;
    char a[10][10];
    cin>>n;
    cin>>x>>y;
    Fill(a, n);
    
    cout<<Left(a,n,x,y,cnt)+Right(a,n,x,y,cnt)+Up(a,n,x,y,cnt)+Down(a,n,x,y,cnt)+1;

    return 0;
}