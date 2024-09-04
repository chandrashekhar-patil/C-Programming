#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    float discriminant = b * b - 4 * a * c;
    
    float r1 = (-b + sqrt(discriminant)) / (2 * a);
    float r2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Root 1: " << r1 << endl;
    cout << "Root 2: " << r2 << endl;

    return 0;
}
