#include <iostream> // input output Library

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a+(b/100+b%10) << endl;

    return 0;
}

//Almat is the KBTU student. Recently he managed to get to the ACM finals, but in order to be registered
//at the finals he needs a secret code which consists of only digits. Code is constructed from two numbers n
//and m. The first number - age of the contestant. The second number - sum of the first and the last digits
//of the 3-digit random number k given by administration of the finals. Help Almat to construct the code.

//The first line contains non-negative number n (1 6 n 6 1 000) - age of the contestant. The second line
//contains non-negative number k (100 6 k 6 1 000) — random number.
//Output
//Calculate the sum of the numbers n and m