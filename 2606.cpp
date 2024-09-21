#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned int l;

    cin >> l;

    vector<string> vctr = {"Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie", "Iulie", "August", "Septembrie", "Octombrie", "Noiembrie", "Decembrie"};

    for (unsigned int i = l; i <= 11; i++){
        cout << vctr[i] << "\n";
    }

    return 0;
}