#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int ques, marks;
        cin >> ques >> marks;
        int a = 0, b = 0, c = 0;
        if(marks % 3 == 0) {
            a += marks / 3;
        }
        else if(marks % 3 == 1) {
            a += (marks / 3) + 1;
            b += 2;
        }
        else if(marks % 3 == 2) {
            a += (marks / 3) + 1;
            b++;
        }
        if( a + b <= ques) {
            cout << "YES" << endl;
            cout << a <<" "<< b <<" "<< ques - a - b << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
  return 0;
}