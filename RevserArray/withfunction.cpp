#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(a[0]);

    reverse(a, a + size);

    cout << "Reverse Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
