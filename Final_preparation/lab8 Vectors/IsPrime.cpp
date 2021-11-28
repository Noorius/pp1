#include <bits/stdc++.h>
using namespace std;

bool isPrime(const int& n){
    if(n==1)
        return false;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    int k;
    cin>>k;
    for(int& c : v){
        if(isPrime(c) && c>k)
            cnt++;
    }
    cout<<cnt;
        
    


    return 0;
}