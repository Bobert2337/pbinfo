#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    signed long long int lst[n];
    for (unsigned int i = 0; i < n; i++) {
        cin >> lst[i];
    }

    signed long long int max = lst[0];

    for (auto j : lst) {
        if (j > max) {
            max = j;
        }
    }

    cout << max;

    return 0;
}
