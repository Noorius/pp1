#include <bits/stdc++.h>
using namespace std;

void UpdateIfGreater(int a, int& b){
    if(a>b)
        b=a;
}

int main()
{
    int a=6;
    int b=3;
    UpdateIfGreater(a,b);
    cout<<a<<" "<<b;

    return 0;
}