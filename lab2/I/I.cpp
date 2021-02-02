#include <iostream>

using namespace std;

int main() {
    int n,tmp,i;
    cin>>n;
    while (n--){
        cin>>tmp;
        if (tmp%10==7)
            i++;
    }
    cout<<i;
    return 0;
}