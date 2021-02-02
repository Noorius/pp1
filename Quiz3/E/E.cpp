#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> mySet;
    set <int>::iterator it;
    vector <int> v;
    vector <int>::iterator it2;
    int n;
    cin>>n;
     for(int i=0; i<n; i++){
         int x;
         cin>>x;
         v.push_back(x);
         mySet.insert(x);
     }
    if(v.size()==mySet.size())
        cout<<"YES";
    else if(v.size()!=mySet.size())
        cout<<"NO";

    return 0;
}