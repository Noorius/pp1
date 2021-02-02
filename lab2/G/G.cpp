#include <iostream>

using namespace std;

int main() {
    int n,maximum,x;
    cin>>n;
    cin>>maximum;
    while (--n){
        cin>>x;
        if (maximum<x)
            maximum=x;
    }
    cout<<maximum;
    return 0;
}
