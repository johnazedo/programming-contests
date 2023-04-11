#include <iostream>
#include <map>
using namespace std;

/*
Difficult: -
Score: -
Link: https://cses.fi/problemset/task/2216/
Contest: DIM0410 - Contest #1 
Status: Solved
*/

int main() {
    int m, temp;
    cin >> m;

    map<int, int> v;
    int count = 1;

    for(int i=0; i<m; i++) {
        cin >> temp;
        v[temp] = i;
    }

    for(int i=0; i<m; i++) {
        if(v[i] > v[i+1]) {
            count++;
        }
    }

    cout << count << endl;
}