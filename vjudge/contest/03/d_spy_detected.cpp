#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
Difficult: B
Score: 2 pts
Link: https://codeforces.com/problemset/problem/1512/A
Contest:  DIM0410 - Contest #3
Status: Solved
*/

int main() {
    int n, m, temp;
    cin >> n;
    
    map<int, int>::iterator itr;

    for(int i=0; i<n; i++) {
        cin >> m;
        map<int, int> ma;
        vector<int> v;


        for(int j=0; j<m; j++) {
            cin >> temp;
            v.push_back(temp);
            itr = ma.find(temp);

            if (itr != ma.end()) {
                itr->second++;
            } else {
                ma[temp] = 1;
            }
        }

        int min = 101;
        int num;

        for(auto e:ma) {
            if(e.second < min) {
                num = e.first;
                min = e.second;
            }
        }

        for(int j=0; j<m; j++) {
            if(v[j] == num) {
                cout << j+1 << endl;
                break;
            }
        }
    }
}