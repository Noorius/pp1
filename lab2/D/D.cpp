#include <iostream>

using namespace std;

int main() {
    int n,t,k;
    cin>>n>>k;
    if (n>k) {
        n=n*2;
        while (n>0) {
            n-=k;
            t++; 
        }
    }
    else if (n<k) {
        while (k>0) {
            k-=n;;
            t++; 
        }
    }
    cout<<t;
    return 0;
}