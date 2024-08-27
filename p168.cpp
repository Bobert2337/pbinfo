#include <iostream>
using namespace std;

int main(){
    long long int a, b;
    cin >> a >> b;

    if (((a < 0) & (b < 0)) || ((a > 0) & (b > 0))){
        cout << "da";
    }
    else {
        cout << "nu";
    }

    return 0;
}