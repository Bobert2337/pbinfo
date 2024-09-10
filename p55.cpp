#include <iostream>
using namespace std;

int main(){
    signed long long int n = 1;
    signed long long int s = 0;

    while (n != 0){
        cin >> n;

        if (n < 0){
            continue;
        }
        
        if ((n == 0) & (s == 0)){
            cout << "NU EXISTA";
            return 0;
        }

        if (n == 0){
            break;
        }

        if (s == 0){
            s = n;
            continue;
        }
        
        if (n < s){
            s = n;
        }
    }

    cout << s;

    return 0;
}