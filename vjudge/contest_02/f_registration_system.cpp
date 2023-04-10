#include <iostream>
#include <map>
using namespace std;

/*
Difficult: C
Score: 3 pts
Link: https://codeforces.com/problemset/problem/4/C
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    int n;
    cin >> n;
    
    string s, nk;  
    map<string, int> m;
    map<string, int>::iterator itr;

    for(int i = 0; i<n; i++) {
        cin >> s;
        itr = m.find(s);
        if(itr != m.end()) {
            itr->second++;
            cout << s << itr->second << endl;
        } else {
            m[s] = 0;
            cout << "OK" << endl;
        }
    }
}