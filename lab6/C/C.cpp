#include <bits/stdc++.h>
using namespace std;
int sorti(int n, int* a_prt){
    int t;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a_prt[i]>a_prt[j]){
                t=a_prt[i];
                a_prt[i]=a_prt[j];
                a_prt[j]=t;
            }
        }
    }
}
void delet(int n, int a_prt[]){
    for(int i=0;i<n;++i) {
		for(int j=i+1;j<n;)
		{
			if(a_prt[i]==a_prt[j])
			{
				for(int k=j;k<n-1;++k)
					a_prt[k]=a_prt[k+1];
					
				--n;
			}
			else
				++j;
		}
    }
}
void fill(int n, int* a_prt){
    for(int i=0; i<n; i++)
        cin>>a_prt[i];
}
int out(int n, int* a_prt){
    for(int i=0; i<n; i++)
        cout<<a_prt[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    fill(n,a);
    fill(n,b);
    sorti(n,a);
    delet(n,a);
    out(n,a);
    return 0;
}