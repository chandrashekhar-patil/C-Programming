// swap the two variable and swap the number;
#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 10;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a : " << a << " b : " << b << endl;

    return 0;
}