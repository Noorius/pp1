#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    for(int i=0; i<n; i++){
        int t;
        cin>>t;
        if(i==0)
            max=t;
        else
        {
            if(t>max)
                max=t;
        }
    }
    cout<<max;


    return 0;
}