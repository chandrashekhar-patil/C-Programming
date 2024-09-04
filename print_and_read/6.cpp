// find the size of int , float , double and char
#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    double d;

    cout << "size of : integer : " << sizeof(a) << endl;
    cout << "size of : float : " << sizeof(b) << endl;
    cout << "size of : character : " << sizeof(c) << endl;
    cout << "size of : double : " << sizeof(d) << endl;

    return 0;
}