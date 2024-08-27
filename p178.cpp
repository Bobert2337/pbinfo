//Să se scrie un program care verifică dacă un număr natural citit de la tastatură este pătrat perfect.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float n;
    cin >> n;
    n = sqrt(n);

    if ((floor(n) < n) & (ceil(n) > n)){
        cout << "nu";
    }
    else {
        cout << "da";
    }

    return 0;
}