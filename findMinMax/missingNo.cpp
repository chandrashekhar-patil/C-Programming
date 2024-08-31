#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 6;

    vector<int> arr{1, 2, 4, 5, 6};
    int size = arr.size();

    int totalSum = n * (n + 1) / 2;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    int miss = totalSum - sum;
    cout << "The missing number is: " << miss << endl;

    return 0;
}
