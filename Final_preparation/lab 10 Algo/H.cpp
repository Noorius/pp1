#include <bits/stdc++.h>
using namespace std;

int Del(const int a[], int a1[],const int& n,int& j){
    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1])
            a1[j++]=a[i];
        else{
            if(a1[j-1]!=a[i])
                a1[j]=a[i];    
        }
    }
}

void Out(int a[], const int& n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}


int main()
{
    int n, j=0;
    cin>>n;
    int a[n],a1[100];
    for(int i=0; i<n; i++)
        cin>>a[i];

    Del(a,a1,n,j);
    Out(a1,j); 

    if(next_permutation(a1,a1+j)){
        Out(a1,j); 
        while(next_permutation(a1,a1+j)){
            Out(a1,j); 
        }
    }
    
    return 0;
}