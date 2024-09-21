#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned int n;

    cin >> n;

    n = n - 2;

    vector<unsigned long int> vctr = {1, 1};

    for (unsigned int i = 1; i <= n; i++){
        unsigned int l = vctr.size() - 1;
        unsigned int l1 = l - 1;

        vctr.push_back(vctr[l] + vctr[l1]);
    }

    for (auto elm : vctr){
        if (elm == vctr[vctr.size() - 1]){
            cout << elm;
            break;
        }
        
        cout << elm << " ";
    }

    return 0;
}