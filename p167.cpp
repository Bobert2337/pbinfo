#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    if (n > 0) {
        cout << "pozitiv";
    } else if (n < 0) {
        cout << "negativ";
    } else {
        cout << "nul";
    }

    return 0;
}