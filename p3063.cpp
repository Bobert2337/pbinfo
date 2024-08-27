#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    vector<string> vctr = {"ianuarie",   "februarie", "martie",    "aprilie",
                           "mai",        "iunie",     "iulie",     "august",
                           "septembrie", "octombrie", "noiembrie", "decembrie"};

    cout << vctr[n - 1];

    return 0;
}