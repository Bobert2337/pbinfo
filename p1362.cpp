#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned int n;
    cin >> n;
    string s = "1";
    
    for (int i = 1; i<=n; i++){
        s += "0";
    }

    cout << s;

    return 0;
}
