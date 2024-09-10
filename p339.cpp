#include <iostream>
using namespace std;

int main(){
    unsigned int n;

    cin >> n;

    int nr = 0;

    for (unsigned int i = 1; i <= n; i++){
        cin >> nr;
        if (nr % 2 == 0){
            cout << nr;
            return 0;
        }
    }

    cout << "IMPOSIBIL";

    return 0;
}
