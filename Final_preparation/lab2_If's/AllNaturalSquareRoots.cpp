#include <bits/stdc++.h>
using namespace std;

void SquareRoot(int n, int j){
    if(j>n)
        return ;
    if(sqrt(j)==(int)sqrt(j)){
        cout<<j<<endl;
    }
    return SquareRoot(n,j+1);
}

int main()
{
    int n,j=1;
    cin>>n;
    SquareRoot(n,j);

    return 0;
}