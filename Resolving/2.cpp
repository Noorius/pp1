#include <bits/stdc++.h>
using namespace std;

unsigned long long int power(int i, int n){
    if(n==0)
        return 1;
    else if (n%2==0)
        return power(i,n/2)*power(i,n/2);
    else 
        return i*power(i,n/2)*power(i,n/2);
}


unsigned long long int square(){
    static int i = -1;
    i++;
    return power(i,i);
}

int main()
{
    int n;
    cin>>n;
    vector<unsigned long long int> v(n+1);
    generate(v.begin(),v.end(), square);
    for(int i=0; i<=n; i++)
        cout<<v[i]<<" ";
    return 0;
}