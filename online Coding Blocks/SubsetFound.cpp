#include<bits/stdc++.h>
using namespace std;

bool compare(string arr1 , string arr2) {
    int s1 = arr1.size();
    int s2 = arr2.size();
    int i = 0, j = 0;
    
    if(s1 < s2) {
        return true;
    }
    else if(s1 > s2) {
        return false;
    }
    else {
        while(i < s1 && j < s2) {
            if(arr1[i] == arr2[j]) {
                i++;
                j++;
            }
            else {
                break;
            }
        }
        if(arr1[i] < arr2[j]) {
            return true;
        }
        else {
            return false;
        }
    }
}

int  counter = 0;
string store[100];

void printAllSubsetsRec(int arr[], int n, string str, int sum) {
    if (sum == 0) {
        //cout << str;
        store[counter++] = str;
        //cout << endl;
        //counter++;
        return;
    }
 
    if (n == 0)
        return;
 
    printAllSubsetsRec(arr, n - 1, str, sum);
    //v.push_back(arr[n - 1]);
    char ch = arr[n - 1] + '0';
    str.push_back(ch);
    printAllSubsetsRec(arr, n - 1, str, sum - arr[n - 1]);
}

int main() {
    int n, arr[1000], sum = 0;
    cin >> n;
    //vector<int> v;
    string str;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> sum;

    printAllSubsetsRec(arr, n, str, sum);   

    sort(store, store + counter, compare);

    for(int i = 0; i < counter; i++) {
        for(int j = 0; j < store[i].length(); j++) {
            cout << store[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}