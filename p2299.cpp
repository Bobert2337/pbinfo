#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n;

    cin >> n;

    unsigned long long int prod = 1;
    unsigned long long int nr = 0;

    for (unsigned int i = 1; i <= n; i++){
        cin >> nr;

        prod = prod * nr;
    }

    cout << pow(prod, 1.0 / n);

    return 0;
}
