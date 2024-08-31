#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int minE = numeric_limits<int>::max();
    int maxE = numeric_limits<int>::min();

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minE)
        {
            minE = arr[i];
        }
        if (arr[i] > maxE)
        {
            maxE = arr[i];
        }
    }

    cout << "Minimum: " << minE << endl << "Maximum: " << maxE << endl;

    return 0;
}
