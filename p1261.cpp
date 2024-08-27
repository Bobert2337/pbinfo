#include <iostream>
using namespace std;

int main(){
    int nr, pare = 0;
    
    while (true){
        cin >> nr;
        if (nr == 0){
            break;
        }
        if (nr % 2 == 0){
            pare++;
        }


    }

    if (pare > 0){
        cout << pare << "\n";
    }

    else {
        cout << "NU EXISTA \n";
    }
    

    return 0;
}
