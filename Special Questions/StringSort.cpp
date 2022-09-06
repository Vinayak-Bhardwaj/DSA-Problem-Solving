#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    int pos1 = a.find(b);
    int pos2 = b.find(a);

    if(pos1 == 0 || pos2 == 0) {
        return a.length() > b.length();
    }
    else {
        return a < b;
    }
}

int main() {
    int n;
    cin >> n;
    string arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, compare);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
