#include <bits/stdc++.h>
using namespace std;

void Length(const int& l1, const int& l2){
    cout<<setprecision(4)<<(double)sqrt(l1*l1+l2*l2);
}

int main()
{
    int l1,l2;
    cin>>l1>>l2;
    Length(l1,l2);

    return 0;
}