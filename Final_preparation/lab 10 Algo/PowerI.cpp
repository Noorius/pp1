#include <bits/stdc++.h>
using namespace std;

unsigned long long square(int i){
    unsigned long long res=i;
    if(i==0)
        return 1;
    for(int j=1; j<i; j++)
        res*=i;
    
    return res;
}

unsigned long long gen(){
    static int i = -1;
    ++i;
    square(i);
}

int main()
{
    int n;
    cin>>n;
    vector<unsigned long long> power(n+1);
    generate(power.begin(),power.end(),gen);
    for(const auto& c : power)
        cout<<c<<" ";
    return 0;
}