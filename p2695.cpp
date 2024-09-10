#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    unsigned long int nn;

    cin >> nn;

    signed long long int n = 0;
    vector<string> vctr = {};

    for (unsigned int i = 0; i < nn; i++){
        cin >> n;

        long double cr = cbrt(n);
        
        if ((cr < ceil(cr)) & (cr > floor(cr))){
            vctr.push_back("NU");
        }
        else {
            vctr.push_back("DA");
        }

        n = 0;
        
    }

    for (auto elm : vctr){
        cout << elm << "\n";
    }

    return 0;
}