#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

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

    cout << mn(vctr);

    return 0;
}