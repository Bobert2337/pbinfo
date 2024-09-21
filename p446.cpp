#include <iostream>
using namespace std;

int main(){
    string s;

    cin >> s;


    unsigned int sm = 0;

    for (unsigned int i = 0; i <= s.length() - 1; i++){
        if (sm < s[i]){
            sm = s[i];
        }
    }

    cout << sm - 48;

    return 0;
}