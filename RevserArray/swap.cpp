#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < len / 2; i++)
    {
        swap(arr[i], arr[len - i - 1]);
    }

    // print the array
    cout << "Reversed Array : ";
    for (i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}