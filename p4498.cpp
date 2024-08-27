#include <iostream>
using namespace std;

int main(){
    signed short int n, m;
    cin >> n >> m;
    string nt = to_string(n);
    string mt = to_string(m);
    string c1, c2, a, b;
    
    for (int i = 0; i<3;i++){
        c1 = nt[i];
        c2 = mt[i];
        a = c1 + c2;
        b = c2 + c1;
        if (stoi(a) > stoi(b)){
            cout << a << " ";
        }
        else {
            cout << b << " ";
        }
    }

    return 0;

}