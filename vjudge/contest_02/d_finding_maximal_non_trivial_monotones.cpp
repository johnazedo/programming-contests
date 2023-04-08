#include <iostream>
#include <map>
#define a 'a'
#define b 'b'
using namespace std;

/*
Difficult: B
Score: 2 pts
Link: https://codeforces.com/gym/103960/problem/A
Contest:  DIM0410 - Contest #2
Status: Solved
*/

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int count = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == a) {
            count++;
        }

        if(s[i] == b || i == n-1) { 
            if(count >= 2) {
                ans += count;
            }
            count = 0;
        }
    }

    cout << ans << endl;
}