#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;



vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

vector<long long int> fi(string str) {
    vector<string> v = split (str, ' ');
    vector<long long int> ret = {};

    for (auto i : v){
        ret.push_back(stoi(i));
    }

    return ret;
}


int main(){
    ifstream inFile;
    inFile.open("maxim.in");

    stringstream strStream;
    strStream << inFile.rdbuf();
    string str = strStream.str();
    inFile.close();

    vector<long long int> vctr = fi(str);
    long long int maxim = vctr[0];

    for (auto i : vctr){
        if (i > maxim){
            maxim = i;
        }
    }

    ofstream outFile("maxim.out");
    outFile << maxim;
    outFile.close();

    return 0;
}