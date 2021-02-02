#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, k,cnt=0;
    cin>>n>>k;
    vector <int> v;

    for(int i=0, j; i<n; i++) {
        cin>>j;
        v.push_back(j);
    }

    vector <int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        if(*it==k)
            cnt++;
    }    
    cout<<cnt;


    return 0;
}