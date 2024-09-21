#include <iostream>
using namespace std;

int main() {
    unsigned long long int n;
    cin >> n;

    if (n < 2) {
        cout << "Numere insuficiente" << endl;
        return 1;
    }

    unsigned long long int last_odd = 0;
    unsigned long long int second_last_odd = 0;
    unsigned long long int current;

    for (unsigned long long int i = 0; i < n; ++i) {
        cin >> current;

        if (current % 2 != 0) {
            second_last_odd = last_odd;
            last_odd = current;
        }
    }

    if (last_odd == 0 && second_last_odd == 0) {
        cout << "Numere insuficiente";
    } else if (last_odd == 0) {
        cout << "Numere insuficiente";
    } else {
        cout << second_last_odd << " " << last_odd;
    }

    return 0;
}
