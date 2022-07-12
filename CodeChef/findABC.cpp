#include<bits/stdc++.h>
using namespace std;

int highestPower(int num) {
    int result = 0;
    for(int i = num; i >= 1; i--) {
        if((i & (i - 1)) == 0) {
            result = i;
            break;
        }
    }
    return result;
}

int main() {

    int testCase;
    cin >> testCase;

    while(testCase--) {

        int num;
        cin >> num;
        int arr[num + 1];

        for(int i = 0; i <= num; i++) {
            cin >> arr[i];
        }

        int answer[3] = {0, 0, 0};
        
        int z = highestPower(num);

        for(int i = z; i > 0; i /= 2) {

            int difference = arr[i] - arr[0];

            if(difference < 0) {

                difference *= -1;
                int counter = difference / i;

                if(counter == 1) {
                    counter = 2;

                    if((answer[0] ^ i) <= num) {
                        answer[0] ^= i;
                        counter--;
                    }

                    if(counter && (answer[1] ^ i) <= num) {
                        answer[1] ^= i;
                        counter--;
                    }

                    if(counter > 0 && (answer[2] ^ i) <= num) {
                        answer[2] ^= i;
                    }
                }

                else if(counter == 3) {
                    answer[0] ^= i;
                    answer[1] ^= i;
                    answer[2] ^= i;
                }
            }

            else {
                int counter = difference / i;

                if(counter == 1) {

                    if((answer[0] ^ i) <= num) {
                        answer[0] ^= i;
                    }

                    else if((answer[1] ^ i) <= num) {
                        answer[1] ^= i;
                    }

                    else {
                        answer[2] ^= i;
                    }
                }
            }
            sort(answer, answer + 3);
        }

        cout << answer[0] << " " << answer[1] << " " << answer[2] << endl;
    }
    return 0;
}