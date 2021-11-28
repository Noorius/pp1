#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<((n%2==0 && ((n>=2 && n<=5)||(n>20))) ? "Not Super" : "Super");

    return 0;
}