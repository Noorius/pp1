#include <bits/stdc++.h>
using namespace std;

template <size_t rows, size_t cols>
void Fill(const int& r, const int& c,int *a){
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cin>>a[j][i];
        }
    }
}

void Print(const int& r, const int& c,int *a){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<*a[r][j];
        }
        cout<<endl;
    }
}

int main()
{
    int r,c;
    cin>>r>>c;
    int a[c][r] = { { } };
    Fill(r,c,a[c]);
    Print(r,c,a[c]);

    return 0;
}