#include <bits/stdc++.h>
using namespace std;

long double  Girl(const long double& t, const long double& g){
    return 1.0*((g*100)/t);
}

int main()
{
    long double  t,g;
    cin>>t>>g;
    printf("%.1000f",Girl(t,g));

    return 0;
}