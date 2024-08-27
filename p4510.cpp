#include <iostream>
using namespace std;

int main(){
    uint16_t n, m;
    uint16_t result = 0;
    cin >> n >> m;
    string c = to_string(n) + to_string(m);

    if (n % 2 == m % 2){
        for (int i : c){
            i -= 48;
            result += i;
        }
    }
    else {
        result += 1;
        for (int i : c){
            i -= 48;
            result *= i;
        }

    }
    
    cout << result;
    
    return 0;
}