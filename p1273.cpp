#include <iostream>
using namespace std;

int main(){
    signed int x, y;
    signed int sum;string s;
    cin >> x >> y;
    sum = x + y;
    s = to_string(sum);
    cout << s[s.length() - 1] << "\n";
    
    return 0;
}
