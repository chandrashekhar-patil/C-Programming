#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int temp;

    // Reverse the array
    for (int i = 0; i < size / 2; i++)
    {
        temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
    cout << "Reverse array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << a[i];
    }
    cout <<"\n";

    return 0;
}
