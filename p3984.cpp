#include <iostream>
using namespace std;

int main(){
    unsigned int n, m;
    cin >> n >> m;
    for (unsigned int i = 1; i <= m; i++){
        cout << n * i << " ";
    }

    return 0;
}