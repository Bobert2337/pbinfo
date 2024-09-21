#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    unsigned int n, m;

    cin >> n >> m;

    vector<unsigned long int> vctr = {};

    for (unsigned int i = 1; i <= n; i++){
        vctr.push_back(m * i);
    }

    sort(vctr.begin(), vctr.end(), greater<unsigned long int>());

    for (auto elm : vctr){
        if (elm == m){
            cout << elm;
            break;
        }
        cout << elm << " ";
    }

    return 0;
}