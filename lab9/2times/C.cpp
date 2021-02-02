#include <bits/stdc++.h>
using namespace std;


int main()
{   

    int n,cnt=0,cnt2=0;
    cin>>n;
    long long a[n];
    set <long long> mySet;
    
    for(int i=0, j; i<n; i++) {
        cin>>j;
        a[i]=j;
        mySet.insert(j);
    }

    set <long long>::iterator it;
    for(it=mySet.begin(); it!=mySet.end(); it++){
        for(int i=0; i<n; i++){
            if(a[i]==(*it))
                cnt++;
        }
        if(cnt>=2)
            cnt2++;
        cnt=0;
    }

    cout<<cnt2;
    return 0;
}