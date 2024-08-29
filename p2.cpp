#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned long int n;
    cin >> n;

    int a;
    vector<int> vctr = {};

    for (int i = 1; i <= n; i++){
        cin >> a;
        vctr.push_back(a);
        a = 0;
    }

    int suma = 0;

    for (auto e : vctr){
        suma += e;
    }

    cout << suma;

    return 0;
}