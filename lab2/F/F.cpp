#include <iostream>

using namespace std;

int main() {
    int n,j,q;
    q=0;
    j=1;
    cin>>n;
    while (j<=n) { 
        q+=j;
        j++;
        
    }
    cout<<q;
    return 0;
}