#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    string opearators;
    int nums[1000];

    cin >> str;

    int cNums = 0, cOps = 0;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            nums[cNums] = str[i] - '0';
            cNums++;
        }
        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            opearators[cOps] = str[i];
            cOps++;
        }
    }

    int result = nums[0];
    int i = 0, j = 1;
    while(j < cNums) {
        if(opearators[i] == '+') {
            result = result + nums[j];
        }
        else if(opearators[i] == '-') {
            result = result - nums[j];
        }
        else if(opearators[i] == '*') {
            result = result * nums[j];
        }
        else {
            result = result / nums[j];
        }
        i++;
        j++;
    }

    cout << result;

    return 0;
}