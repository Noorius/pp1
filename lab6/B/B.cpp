#include <bits/stdc++.h>
using namespace std;

void fill(int n, int* a_prt){
    for(int i=0; i<n; i++)
        cin>>a_prt[i];
}

void dif(int n, int* a_prt, int* b_prt, int* c_prt){
    for (int i=0; i<n; i++){
        if(a_prt[i]>b_prt[i] || a_prt[i]==b_prt[i]){
            c_prt[i]=a_prt[i]-b_prt[i];
        }
        else if(a_prt[i]<b_prt[i]){
            c_prt[i]=b_prt[i]-a_prt[i];
        }
    }
}
int out(int n, int* c_prt){
    for(int i=0; i<n; i++)
        cout<<c_prt[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    fill(n, a);
    fill(n, b);
    dif(n, a, b, c);
    out(n, c);
    return 0;
}