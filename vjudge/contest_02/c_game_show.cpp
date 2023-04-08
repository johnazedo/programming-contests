#include <iostream>
#include <vector>
using namespace std;

/*
Difficult: B
Score: 2 pts
Link: https://codeforces.com/gym/102861/problem/G
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    int n, temp;
    cin >> n;

    int ans = 100;
    vector<int> v;

    for(int i =0; i<n; i++) {
        cin >> temp;
        ans += temp;
        v.push_back(ans);
    }

    int max = -1001;
    for(int i=0; i<n; i++) {
        if(v[i] > max) {
            max = v[i];
        }
    }

    if(max<100) {
        cout << 100 << endl;
    } else {
        cout << max << endl;
    }   
}