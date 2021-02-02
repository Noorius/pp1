#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int min, max, cnt;

    for(int i=0; i<n; i++)
        cin>>a[i];
    
    min=*min_element(a,a+n);
    max=*max_element(a,a+n);
    sort(a,a+n);
    
    for(int j=min; j<=max;j++) {
        for(int i=0; i<n; i++){
            if(a[i]==j)
                cnt++;
                break;
        }
    }
    cout<<cnt;

    return 0;
}