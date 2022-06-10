#include<bits/stdc++.h>
using namespace std;

bool isValid(string str, string &p1, string &p2, string &p3) {
    int len = str.length();

    // Checking Part 2
    bool part2;
    if(str.find("@wipro") < len) {
        p2 = "@wipro";
        part2 = true;
    }
    else if(str.find("@gmail") < len) {
        p2 = "@gmail";
        part2 = true;
    }
    else if(str.find("@yahoo") < len) {
        p2 = "@yahoo";
        part2 = true;
    }
    else {
        part2 = false;
    }

    // Checking part 3
    bool part3;
    if(str.find(".com") < len) {
        part3 = true;
        p3 = ".com";
    }
    else {
        part3 = false;
    }

    // Checking part1
    bool part1;
    int indexFrom = str.find("@");
    str.erase(indexFrom, (len - indexFrom));
    p1 = str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            part1 = true;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            part1 = true;
        }
        else {
            part1 = false;
            break;
        }
    }

    if(p1.length() > 15) {
        part1 = false;
    }
    
    if(part1 == true && part2 == true && part3 == true) {
        return true;
    }
    
    return false;
}

int main() {
    string str, p1, p2, p3;
    cin >> str;
    if(isValid(str, p1, p2, p3)) {
        cout << p1 << ":" << p3 << ":" << "valid";
    }
    else {
        cout << p1 << ":" << p2 << ":" << "invalid";
    }
    return 0;
}