#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> vec;

bool compare(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) {
        return v1.size() < v2.size();
    }

    // traverse to point where you find unequal and return the one with smaller
    int i = 0;
    while(i != v1.size()) {
        if(v1[i] < v2[i]) {
            return true;
        }
        else if(v1[i] > v2[i]) {
            return false;
        }
        i++;
    }
}

void subsets(vector<int> &arr, vector<int> &out, int i, int sum) {
    // BASE CASE
    if(i == arr.size()) {
        int findSum = 0;
        for(int p = 0; p < out.size(); p++) {
            findSum += out[p];
        }

        if(findSum == sum) {
            vec.push_back(out);
        }

        return;
    }
    // RECURSIVE CASE
    
    //1. Dont store anything
    subsets(arr, out, i + 1, sum);

    //2. Store 1 number
    //out[j] = arr[i];
    out.push_back(arr[arr.size() - i - 1]);
    subsets(arr, out, i + 1, sum);
    out.pop_back();
}

int main() {
    int n, sum;
    cin >> n;
    //int arr[n], out[n];
    vector<int> arr, out;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cin >> sum;

    // for(int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }

    subsets(arr, out, 0, sum);

    sort(vec.begin(), vec.end(), compare);

    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}