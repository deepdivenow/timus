//
// Created by dro on 26.06.18.
//

#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    vector<double> db;
    int64_t tmp;
    while ( cin >> tmp ){
        db.push_back(tmp);
    }
    for (auto it=db.rbegin(); it<db.rend(); it++){
        cout << setprecision(4) << fixed << sqrt(*it) << endl;
    }
    return 0;
}