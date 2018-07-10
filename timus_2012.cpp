//
// Created by dro on 26.06.18.
//

#include <iostream>

using namespace std;

int main() {
    int f;
    cin >> f;
    int all=12;
    int last=4*60/45;
    if (all-last-f <= 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}