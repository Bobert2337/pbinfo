#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned long long int n;
    cin >> n;

    string str = to_string(n);

    cout << int(str[str.length() - 1]) - 48 + int(str[str.length() - 2]) - 48;
}