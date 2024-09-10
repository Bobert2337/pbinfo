#include <iostream>
#include <cmath>
using namespace std;

double log_base(double value, double base) {
    return log(value) / log(base);
}

int main() {
    double value;
    double base;

    cin >> base >> value;

    double result = log_base(value, base);

    cout << result;

    return 0;
}