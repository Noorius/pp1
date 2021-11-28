#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,pos=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            pos=i;
        }
            
    }
    cout<<pos+1;

    return 0;
}