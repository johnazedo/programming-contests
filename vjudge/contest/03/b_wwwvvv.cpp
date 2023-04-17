#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
Difficult: A
Score: 1 pts
Link: https://atcoder.jp/contests/abc255/tasks/abc255_a?lang=en
Contest:  DIM0410 - Contest #3
Status: Solved
*/

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'v') {
            count++;
        }

        if (s[i] == 'w') {
            count+=2;
        }
    }

    cout << count << endl;
}