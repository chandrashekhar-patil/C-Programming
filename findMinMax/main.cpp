#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the element : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN; //0
    int min = INT_MAX;//0

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Max : " << max << " Min : " << min << endl;
    return 0;
}