//
// Created by dro on 26.06.18.
//

#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    map<int,string> db{{4,"few"},
                       {9,"several"},
                       {19, "pack"},
                       {49, "lots"},
                       {99, "horde"},
                       {249, "throng"},
                       {499, "swarm"},
                       {999, "zounds"},
                       {2000, "legion"}};
    int num;
    while ( cin >> num ){
        auto it=db.lower_bound(num);
        cout << it->second << endl;
    }
    return 0;
}