#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int ma(vector<long long int> vctr) {
    long long int n = vctr[0];
    for (auto i : vctr) {
        if (i > n) {
            n = i;
        }
    }

    return n;
}

int mn(vector<long long int> vctr) {
    long long int n = vctr[0];
    for (auto i : vctr) {
        if (i < n) {
            n = i;
        }
    }

    return n;
}

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;
    vector<long long int> vctr = {a, b, c};

    long long int d = ma(vctr);
    long long int e = mn(vctr);

    cout << d - e;

    return 0;
}