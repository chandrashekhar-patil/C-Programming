#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};

    cout << "min : " << *min_element(arr.begin(), arr.end()) << endl;
    cout << "max : " << *max_element(arr.begin(), arr.end()) << endl;

    return 0;
}
