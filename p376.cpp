#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    unsigned long long int n;
    cin >> n;
    unsigned long long int i = 2;
    list<int> numere = {};
    list<int> nr = {};
    list<int> sume = {};
    
    while (n != 1){
        i = 2;
        while (n % i != 0){
            i += 1;
        }
        n = n / i;
        numere.push_back(i);
    }

    for (auto j : numere){
        if (count(nr.begin(), nr.end(), j) == 0){
            unsigned long long int suma = 0;
            unsigned int cnt = count(numere.begin(), numere.end(), j);
            for (unsigned long int a = 0; a <= cnt; a++){
                suma += pow(j, a);
            }
            nr.push_back(j);
            sume.push_back(suma);
        }
    }
    
    unsigned long long int produsSuma = 1;

    for (auto m : sume){
        produsSuma *= m;
    }

    cout << produsSuma;
}