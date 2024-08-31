#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n = 5;

    cout << "Enter the Element of the array : ";
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    int size = arr.size();
    // Reverse the array
    for (int i = size - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
    }
    cout << "\n";

    return 0;
}