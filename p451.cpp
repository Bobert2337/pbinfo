#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n <= 15){
        cout << pow(n, 2);
    }
    else if ((n >= 16) & (n <= 30)){
        string str = to_string(n);
        int s = 0;

        for (auto i : str){
            if (s == 0){
                s = int(i) - 48;
            }
            else {
                s += (int(i) - 48);
            }
        }

        cout << s;
    }
    else {
        string str = to_string(n);
        int s = 0;

        for (auto i : str){
            if (s == 0){
                s = int(i) - 48;
            }
            else {
                s *= (int(i) - 48);
            }
        }

        cout << s;
    }
}