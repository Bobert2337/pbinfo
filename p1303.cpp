#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int eval(string expression);

int main() {
    string a, b;
    string smn;
    cin >> a >> b;
    cin >> smn;
    string expr = a + smn + b;
    float r = eval(expr);
    cout << r << endl;
    return 0;
}

int eval(string expression) {
    istringstream iss(expression);
    float result;
    iss >> result; // Citeste primul numar
    
    char op;
    float num;
    
    while (iss >> op) { // Citeste urmatorul operator
        iss >> num; // Citeste urmatorul numar
        
        switch(op) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num != 0) {
                    // cout << result << " " << num;
                    result = float(result) / float(num);
                    cout << result;
                } else {
                    cout << "Error: Impartire la zero " << endl;
                    return 0;
                }
                break;
            default:
                cout << "Error: Operator necunoscut " << op << endl;
                return 0;
        }
    }
    
    return result;
}