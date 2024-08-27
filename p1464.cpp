#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n;
    long long int k;
    cin >> n >> k;

    if (k % 2 == 0){
        k -= 1;
        k = k / 2;
        k = k * 3 + 1;
        k = k * 10 + n;
        cout << k;
    }
    else {
        k = k / 2;
        k = k * 3;
        k = k * 10 + n;
        cout << k;
    }

    return 0;
}