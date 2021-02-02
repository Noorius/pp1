#include <bits/stdc++.h>
using namespace std;

double hype(int K1, int K2)
{
    return sqrt(pow(K1,2)+pow(K2, 2));
}

int main()
{
    int k1, k2;
    cin>>k1>>k2; 
    cout<<setprecision(4)<<hype(k1,k2);

    return 0;
}