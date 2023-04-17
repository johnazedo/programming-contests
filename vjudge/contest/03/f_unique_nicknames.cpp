#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

/*
Difficult: C
Score: 3 pts
Link: https://atcoder.jp/contests/abc247/tasks/abc247_b?lang=en
Contest:  DIM0410 - Contest #3
Status: Unsolved
*/

int main() {
    int n;
    cin >> n;

    string name, sname;
    map<string, int> mapping;
    set<int> se;

    for(int i=0; i<n; i++) {
        cin >> name >> sname;
        mapping[name] = i;
        mapping[sname] = i;
    }

    for(auto pair:mapping) {
        se.insert(pair.second);
    }

    if(n != se.size()) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}