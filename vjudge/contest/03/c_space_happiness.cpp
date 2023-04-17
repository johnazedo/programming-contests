#include <iostream>
#include <vector>
#include <map>
#define ll long long
using namespace std;

/*
Difficult: B
Score: 2 pts
Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=5167
Contest:  DIM0410 - Contest #3
Status: Solved
*/

int main() {
    
    ll int n, temp;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> temp;        
        ll int count = temp;

        for(ll int j=1; j<temp; j+=2) {
            count += (2*j);
        }
        cout << count << endl;
    }
}