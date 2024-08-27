# include <iostream>
using namespace std;

int main(){
    signed int nr;
    cin >> nr;
    if (nr % 2 == 0){
        cout << nr << " este par \n";
    }
    else {
        cout << nr << " este impar \n";
    }
    
    return 0;
}