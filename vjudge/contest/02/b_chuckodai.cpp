#include <iostream>
using namespace std;

/*
Difficult: A
Score: 1 pts
Link: https://atcoder.jp/contests/abc236/tasks/abc236_a?lang=en
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    string s;
    cin >> s;

    int a, b;
    cin >> a >> b;

    int temp = s[a-1];
    s[a-1] = s[b-1];
    s[b-1] = temp;

    cout << s << endl;
}