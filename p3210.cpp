#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int b, s;
    int p;
    cin >> b >> s;
    int c = floor(s / b);
    if (b * c < s){
        p = b - (s - b * c);
    }
    else {
        p = 0;
    }
    
    cout << c << " " << p << "\n";

    return 0;
}