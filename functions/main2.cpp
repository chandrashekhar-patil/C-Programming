// function is piece of code that performs a specific task
#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
    return;
}
int add(int num1, int num2)
{
    print(num1);
    print(num2);

    int sum = num1 + num2;
    return sum;
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    cout << add(num1,num2) << endl;

    return 0;
}