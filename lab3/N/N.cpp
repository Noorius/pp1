#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin>>n;
    unsigned int a[n];
    for (int i=0;i<n; i++)
        cin>>a[i];
    for (int i=0;i<n; i++){
        cout<<a[i]*a[i]<<" ";
    }

    return 0;
}