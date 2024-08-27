#include <iostream>
using namespace std;

int main(){
    unsigned int s, l;
    cin >> s >> l;
    if (l % s >= 1){
        cout << l / s + 1;
    }
    else {
        cout << l / s;
    }
    

    return 0;
}