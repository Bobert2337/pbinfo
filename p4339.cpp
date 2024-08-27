#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned long long int a, b, c;
    cin >> a >> b >> c;
    int p = 0;
    int im = 0;
    vector<unsigned long long int> vctr = {a, b, c};

    for (auto i : vctr) {
        if (i % 2 == 0) {
            p += 1;
        } else {
            im += 1;
        }
    }

    if (p > im) {
        cout << "pare";
    } else {
        cout << "impare";
    }

    return 0;
}