#include<bits/stdc++.h>
using namespace std;
int main() {
    int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int n = sizeof(coins) / sizeof(int);
    int money;
    cin >> money;

    while(money > 0) {
        int index = lower_bound(coins, coins + n, money) - coins;
        if(coins[index] != money) {
            index--;
        }
        cout << "we would give exchange of coin " << coins[index] << endl;
        money = money - coins[index];
    }
    return 0;
}