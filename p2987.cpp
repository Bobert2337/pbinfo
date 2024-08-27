#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned long long int cnp;
    cin >> cnp;

    string cnp2 = to_string(cnp);
    string dt = "";
    int b = 0;

    for (int i = 1; i <= 6; i++){
        if (b == 2){
            dt += " ";
            b = 0;
        }

        dt += cnp2[i];
        b += 1;

    }

    cout << dt;
}