#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

/*
Difficult: C
Score: 3 pts
Link: https://codeforces.com/problemset/problem/1520/A
Contest:  DIM0410 - Contest #3
Status: Solved
*/

int main() {
    int n, m;
    cin >> n;

    string s;
    char last;
    

    for(int i=0; i<n; i++) {
        set<char> solved;
        string ans = "YES";
        cin >> m;
        cin >> s;
        solved.insert(s[0]);
        last = s[0];
        for(int j=1; j<s.size(); j++) {
            char actual = s[j];
            if(actual != last) {
                if(solved.find(actual) != solved.end()) {
                    ans = "NO";
                    break;
                }
                solved.insert(actual);
                last = actual;
            }
        }
        cout << ans << endl;
    }
}