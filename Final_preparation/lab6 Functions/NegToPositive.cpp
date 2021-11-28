#include <bits/stdc++.h>
using namespace std;

void Pos(int n){
    cout<<-n;
}
int main()
{
    int n;
    cin>>n;
    if(n>=0)
        cout<<n;
    else    
        Pos(n);


    return 0;
}