// swap the two number using third variable
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;

   int temp = a;
    a = b;
    b = temp;

    cout << "a : " << a <<" b : " <<  b << endl;

    return 0;
}