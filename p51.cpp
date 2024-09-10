#include <iostream>
using namespace std;

int main(){
    long long int n = 1;
    long long int s = 0;

    while (n != 0){
        cin >> n;
        s += n;
    }

    cout << s;

    return 0;
}