#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int n;
    char c;

    cin >> n >> c;

    for (unsigned int i = 1; i <= n; i++){
        for (unsigned int u = 1; u <= i; u++){
            cout << c;
        }
        cout << "\n";
    }

    for (int a = n; a >= 1; a--){
        int x = n - a;
        int s = n - x;
        char cr;
        cr = ' ';
        string result(x, cr);
        string rs(s, c);
        cout << result;
        cout << rs;
        cout << "\n";
    }


    return 0;
}