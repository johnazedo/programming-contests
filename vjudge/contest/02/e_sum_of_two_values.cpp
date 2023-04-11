#include <iostream>
#include <map>
using namespace std;

/*
Difficult: C
Score: 3 pts
Link: https://cses.fi/problemset/task/1640
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    int n, x, temp, value;
    cin >> n >> x;

    /* map<d, i> 
     - where d is the difference between x and one of the input numbers 
     - where i is the index of the input number
    */ 
    map<int, int> m;
    map<int, int>::iterator itr;

    for(int i=0; i<n; i++) {
        cin >> temp;
        int value = x - temp;
        itr = m.find(temp);
        if (itr != m.end()) {
            cout << itr->second << " " << i+1 << endl;
            return 0;
        }
        m[value] = i+1;
    }

    cout << "IMPOSSIBLE" << endl;
}