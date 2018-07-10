//
// Created by dro on 26.06.18.
//

#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {
    map<int,string> db{{5,"few"},
                       {10,"several"},
                       {20, "pack"},
                       {50, "lots"},
                       {100, "horde"},
                       {250, "throng"},
                       {500, "swarm"},
                       {1000, "zounds"},
                       {2001, "legion"}};
    int num;
    while ( cin >> num ){
        for (auto d : db){
            if (num < d.first){
                cout << d.second << endl;
                break;
            }
        }
    }
    return 0;
}