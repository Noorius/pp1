#include <iostream>

using namespace std;

int main() {
    int n,mx=-20000000,k;
    cin>>n;
    int a[n];
    for (int i = 0; i<n; i++)
        cin>>a[i];
    for (int i = 0; i<n; i++){
        if (mx<a[i]) {
            mx=a[i];
            k=i+1;
        }
    }
    cout<<k;
    return 0;
}