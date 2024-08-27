#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    long double a, b, c;
    cin >> a >> b >> c;
    if (((a + b) < c) || ((a + c) < b) || ((b + c) < a) || (a > 1000) || (b > 1000) || (c > 1000)){
        cout << "Imposibil";
        return 0;
    }

    long double s = (a + b + c) / 2;
    long double ar = sqrt(s * (s - a) * (s - b) * (s - c));
    long double r = (a * b * c) / (4 * ar);

    cout << fixed << setprecision(2) << r;

    return 0;
}