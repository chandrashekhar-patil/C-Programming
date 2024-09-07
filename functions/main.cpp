// function is piece of code that performs a specific task
#include<iostream>
using namespace std;

int Sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a = 10;
    int b = 20;

    cout << Sum(a,b)<< endl;

    return 0;
}