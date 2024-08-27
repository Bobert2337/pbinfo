#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;

    if (n % 2 == 0){
        n -= 1;
    }
    
    for (signed int i = n; i >= 1; i -= 2){
        cout << i << " ";
    }

    return 0;
}