//Să se scrie un program care verifică dacă un număr natural citit de la tastatură este pătrat perfect.
//Programul citește de la tastatură numărul natural n.
//Programul afișează pe ecran mesajul da, dacă n este pătrat perfect, respectiv nu în caz contrar.
//n < 2.000.000.000
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