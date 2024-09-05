#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6};
    int size = arr.size();

    int mul = 1;
    for (int i = 0; i < size; i++)
    {
        mul = mul * arr[i];
    }

    cout << "Multiplication : " << mul << endl;

    return 0;
}