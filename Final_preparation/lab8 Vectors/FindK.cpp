#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int& c : v)
        cin>>c;
    int k;
    cin>>k;
    for(const int& c : v){
        if(k==c){
            cout<<"Yes";
            return 0;
        }
            
    }
    cout<<"No";
    return 0;
}