#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    unsigned int i = n;
    while (i >= 1){
        cout << i-- << " ";
    }
    
    return 0;
}