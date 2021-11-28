#include <bits/stdc++.h>
using namespace std;

/* int Comp(const int& a, int b[], const int& n){
    int * p=find(,a);
    if(p != b+n){
        b[p-b]=0;   
        return 1;
    }
    else 
        return 0;
} */

void Fill(int a[], int b[],const int& n){
    for(int i=0; i<n; i++)
       cin>>a[i];
    for(int i=0; i<n; i++)
       cin>>b[i];
}

int main()
{
    int n,cnt=0;
    cin>>n;
    int a[n],b[n];
    Fill(a,b,n);
    set<int> s(a,a+n);
    set<int>::iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        for(int i=0; i<n; i++){
            if(*it==b[i])
                cnt++;
        }
    }

    cout<<cnt;

    return 0;
}