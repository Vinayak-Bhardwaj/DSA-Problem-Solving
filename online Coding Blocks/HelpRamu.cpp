#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;

    int c1, c2, c3, c4, n, m;
    int rick[1005], cabs[1005];

    while(test--) {
        cin >> c1 >> c2 >> c3 >> c4;
        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            cin >> rick[i];
        }

        for(int i = 0; i < m; i++) {
            cin >> cabs[i];
        }

        int rickCost = 0;
        for(int i = 0; i < n; i++) {
            rickCost = rickCost + min(c1 * rick[i], c2);
        }
        rickCost = min(rickCost, c3);

        int cabCost = 0;
        for(int i = 0; i < m; i++) {
            cabCost = cabCost + min(c1 * cabs[i], c2);
        }
        cabCost = min(cabCost, c3);

        int finalAns = min(c4, rickCost + cabCost);

        cout << finalAns << endl;
    }
    return 0;
}


