#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << "\n";

    for (unsigned int i = n; i >= 1; i--){
        cout << i << " ";
    }


}