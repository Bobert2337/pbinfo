#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if ((n + 1) % 2 == 0){
        n = n + 1;
        cout << n << " " << n + 2;
    }
    else if ((n + 2) % 2 == 0){
        n = n + 2;
        cout << n << " " << n + 2;
    }
}
