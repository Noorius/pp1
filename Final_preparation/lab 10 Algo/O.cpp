#include <bits/stdc++.h>
using namespace std;

int Recursion(int n,int i){
    if(n==0)
        return 0;
    return (n%2)*i+Recursion(n/2,i*10);
}

int foo(int n){
    cout<<Recursion(n,1)<<endl;
} 

int main()
{
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;

    for_each(v.begin(), v.end(), foo);

    return 0;
}