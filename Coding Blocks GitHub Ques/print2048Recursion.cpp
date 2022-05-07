// #include<bits/stdc++.h>
// using namespace std;

// string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// void printNum(int n) {
//     //BASE CASE
//     if(n == 0) {
//         return;
//     }
//     //RECURSIVE CASE
//     int rem = n % 10;
//     printNum(n / 10);
//     cout << str[rem] << " ";
// }

// int main() {
//     int n;
//     cin >> n;
//     printNum(n);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printNum(int n) {
    //BASE CASE
    if(n == 0) {
        return;
    }
    //RECURSIVE CASE
    int rem = n % 10;
    printNum(n / 10);
    cout << str[rem] << " ";
}

int main() {
    int n;
    cin >> n;
    printNum(n);
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

// void printNum(int n) {
//     // BASE CASE
//     if(n == 0) {
//         return;
//     }
//     // RECURSIVE CASE
//     int dig = n % 10;
//     printNum(n / 10);
//     cout << str[dig] << " ";
// }

// int main() {
//     int n;
//     cin >> n;
//     printNum(n);
//     return 0;
// }