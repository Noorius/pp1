#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    string path = "text.txt";
    ifstream in;
    in.open(path, ofstream::app);
    in >> x >> y;
    ofstream out;
    out << x + y;
    out.close();
}
