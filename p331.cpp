#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;

    for (signed int i = n * 2 - 1; i >= 1; i -= 2){
        cout << i << " ";
    }

    return 0;
}