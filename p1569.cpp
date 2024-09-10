#include <iostream>
using namespace std;

int main(){
    unsigned int n;

    cin >> n;

    for (unsigned int i = 1; i <= n; i++){
        for (unsigned int s = 1; s <= i; s++){
            for (unsigned int j = 1; j <= i; j++){
                cout << i;
            }

            cout << "\n";
        }

    }

    return 0;
}