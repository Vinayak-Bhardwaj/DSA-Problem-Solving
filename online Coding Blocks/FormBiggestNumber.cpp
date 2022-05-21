//This is a very Important question so understand it carefully
// Approach: we will store integer elements typecasted as integer in vector of strings so suppose we have strings 5, 10 , 11 ,20
// So it will sort these vector of strings in a particular comparator manner now what is it?
// comparator as we know at a time takes two elements suppose
// 1. 5 and 10, it will form one = 5+10(strings) = 510 and two = 105(strings) now let's see which is bigger in terms of first placement in final result to make the whole arrangement bigger
// i.e 510 > 105 obvio so how?
// enter in while loop with i = 0 so one[0] > two[0] (5 > 1) so return true directly that comparator has returned true from the comparison of both the strings and we can sort such tha a is placed before b because final result says that ab > ba
// Now why didn't we checked other digits because see one thing is for sure the number of digits in ab == ba because both formed from same numbers
// we just have to check which is bigger and that we can do by just checking the front numbers, whichever number's front number is bigger so that is bigger, and if digits are same so repeatedly go on to next digits and at whichever digit you get the answer just return true and false accroding to it

// Take another example 10, 11
// one = 1011 two = 1110 now i = 0 while says they are equal so do i++
// i = 1 tells us the differentiator that yes one[1] < two[1] so place b before a as  ba>ab

#include<bits/stdc++.h>
using namespace std;

bool comparator(string a, string b) {
    string one = a + b;
    string two = b + a;

    int i = 0;
    while(one[i] && two[i]) {
        if(one[i] > two[i]) {
            return true;
        }
        else if(one[i] < two[i]){
            return false;
        }
        ++i;
    }

    return false;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int len;
        vector<string> arr;
        cin >> len;
        string temp;
        for(int i = 0; i < len; i++) {
            cin >> temp;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end(), comparator);

        for(int i = 0; i < len; i++) {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}