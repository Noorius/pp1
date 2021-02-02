#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> orig;
    map<int,int> cnt;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int key,val;
        cin>>key>>val;
        if(orig.second==*(orig.find(orig.second)))
            cout<<"1";
        else if(orig[0]!=rev[0])
            cout<<"0";
    }
    
        
    
    return 0;
}