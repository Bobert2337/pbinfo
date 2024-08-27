#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;

    for (unsigned int i = 2; i <= n; i += 2){
        cout << i << " ";
    }

    return 0;
}
