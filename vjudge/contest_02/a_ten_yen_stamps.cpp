#include <iostream>
using namespace std;

/*
Difficult: A
Score: 1 pts
Link: https://atcoder.jp/contests/abc233/tasks/abc233_a?lang=en
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    int n, m;
    cin >> n >> m;

    if(m < n) {
        cout << 0 << endl;
        return 0;
    }

    int result = (m-n)/10;

    if((m-n)%10!=0) result++; 

    cout << result << endl;
}