#include<bits/stdc++.h>
using namespace std;

bool checker(vector<int> vect, int n) {
    for(auto i: vect) {
        if(n == i) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int curr = 0;
    bool flowRight = false;
    vector<int> vect;

    for(int i = 0; i < n; i++) {

        if(arr2[i] == 0) {
            int times = arr1[i];
            while(times) {
                curr--;
                times--;
            }
            while(curr < 0) {
                curr = n + curr;
            }
            flowRight = false;
        }

        else {
            int times = arr1[i];
            while(times) {
                curr++;
                times--;
            } 

            while(curr >= n) {
                curr = curr - n;
            }
            flowRight = false;
        }

        vect.push_back(curr);

    }
}