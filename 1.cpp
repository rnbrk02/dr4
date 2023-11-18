#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Enter the value of x: ";
    cin >> x;

    if (x >= 0 && x <= 1) {
        y = pow(x, 3) + 3 * x + 4;
    } else if (x < 0) {
        y =(pow(x, 3) + 3 * x + 4, 2);
    } else {
        y = -4;
    }

    cout << "The value of y is: " << y << endl;

    return 0;
}