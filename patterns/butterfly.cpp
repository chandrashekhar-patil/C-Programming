#include <iostream>
using namespace std;
int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j < space + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j < space + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << "\n";
    }
}