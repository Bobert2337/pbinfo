#include <iostream>
#include <list>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    unsigned long long int p;

    cin >> n >> p;

    list<unsigned long long int> lst = {};
    unsigned long int i = 0;


    while (lst.back() <= p){
        if (pow(n, i) > p){
            break;
        }
        
        lst.push_back(pow(n, i));
        i += 1;
    }

    for (auto elm : lst){
        if (elm == lst.back()){
            cout << elm;
            break;
        }
        
        cout << elm << " ";
    }

    return 0;
}