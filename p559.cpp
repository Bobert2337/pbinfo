#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vctr = {};
    unsigned int n = 0;

    for (unsigned int i = 1; i <= 5; i++){
        cin >> n;
        vctr.push_back(n);
    }

    sort(vctr.begin(), vctr.end(), greater<int>());

    cout << vctr[0] + vctr[1] + vctr[2];

    return 0;
}