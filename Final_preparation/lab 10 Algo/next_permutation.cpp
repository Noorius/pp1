#include <bits/stdc++.h>
using namespace std;

bool Palin(int a[], const int& n){
    for(int i=0, j=n-1; i<j; i++, j--){
        if(a[i]!=a[j])
            return false;
    }
    return true;
}

void Out(int a[], const int& n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

bool compare(int a[], int orig[], int& n){
    for(int i=0; i<n; i++){
        if(a[i]!=orig[i])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a[n], orig[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        orig[i]=a[i];
    }
    sort(a,a+n);

    int cnt=0;
    bool t = true;
    while(t){
        if(Palin(a,n) ){ //&& !compare(a,orig,n)
            Out(a,n);
            cnt++;
            break;
        }   
        t = next_permutation(a,a+n);   
    }
    if(cnt==0)
        cout<<"Impossible";
    return 0;
}