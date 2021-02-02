#include <iostream> // input output Library

using namespace std;

int main() {
    int N;
    cin >> N;
    cout<<(N/8)+2*(N/4%2)+4*(N/2%2)+8*(N%2)<<endl;
    return 0;
}

//You are given integer number N, guaranteed that the number has exactly 4 bits in binary representation.
//reverse the number in binary representation and print out it.
