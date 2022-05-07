#include<iostream>
using namespace std;
int main() {
    int n,arr[100][100];
    cin>>n;
    arr[0][0] = 1;
    //arr[1][0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}