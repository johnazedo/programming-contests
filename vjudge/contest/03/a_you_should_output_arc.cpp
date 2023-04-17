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
    int n, m, temp;
    cin >> n >> m;

    for(int i = 0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            cin >> temp;
            if(i == n-1 && j==m-1) {
                cout << temp << endl;
            }
        }
    }
}