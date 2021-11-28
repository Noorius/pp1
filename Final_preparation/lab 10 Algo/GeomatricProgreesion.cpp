#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        sum+=i;
    vector<int> v(sum);

    int m=0;
    for(int i=0; i<=n; i++){
        fill(v.begin()+m,v.end()+m+i+1,i+1);
        m+=i+1;
    }
    
    
    for(const int& c : v)
        cout<<c<<" ";


    return 0;
}

/*for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++) */