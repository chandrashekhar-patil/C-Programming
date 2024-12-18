#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the any number to check prime or not : ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Prime  Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}