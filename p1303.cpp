#include <iostream>
using namespace std;

int main(){
    float a, b;
    string op;

    cin >> a >> b;
    cin >> op;

    if (op == "+"){
        cout << a + b;
    }
    else if (op == "-"){
        cout << a - b;
    }
    else if (op == "*"){
        cout << a * b;
    }
    else if (op == "/"){
        cout << a / b;
    }

    return 0;
}