#include <iostream>
using namespace std;

int main(){
    unsigned int n;

    cin >> n;

    for (unsigned int i = 1; i <= n; i++){
        for (unsigned int g = 1; g <= i; g++){
            cout << g << " ";
        }
        
        cout << "\n";
    }

    return 0;
}