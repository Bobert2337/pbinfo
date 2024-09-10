#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    char m, f;

    cin >> n >> m >> f;

    for (unsigned int a = 1; a <= n; a++){
        cout << m;
    }

    cout << "\n";

    for (unsigned int i = 1; i <= n - 2; i++){
        cout << m;
        for (unsigned int j = 1; j <= n - 2; j++){
            cout << f;
        }
        cout << m;
        cout << "\n";
    }

    for (unsigned int a = 1; a <= n; a++){
        cout << m;
    }

    return 0;
}