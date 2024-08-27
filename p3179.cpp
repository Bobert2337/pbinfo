#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    if (n < 1 || n > 50){
        cout;
        return 0;
    }
    unsigned long int pasari = pow(n, 5);
    cout << pasari << "\n";

    return 0;
}