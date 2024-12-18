#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "Sum of all Odd number : " << sum << endl;
    return 0;
}