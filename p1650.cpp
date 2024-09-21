#include <iostream>
using namespace std;

int main(){
    long double n;
    unsigned long int nrs;

    cin >> n >> nrs;

    long double nr = 0;
    long double s = n;

    for (unsigned int i = 1; i <= nrs; i++){
        cin >> nr;
        s += nr;
    }

    if (s == n){
        cout << "DA";
    }
    else {
        cout << "NU";
    }

    return 0;
}