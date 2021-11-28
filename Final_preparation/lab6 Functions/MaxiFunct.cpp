#include <bits/stdc++.h>
using namespace std;

int Maxi(){
    int n=4,maxi=INT_MIN;
    while(n!=0){
        int t;
        cin>>t;
        if(t>maxi)
            maxi=t;
        n--;
    }
    return maxi;
}
int main()
{
    cout<<Maxi();


    return 0;
}