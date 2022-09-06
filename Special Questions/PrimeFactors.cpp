#include<bits/stdc++.h>
using namespace std;


// There is no special about this method it's simple
void primeFactors1(int n) {
    
    // Firstly calculate all 2's Factors
    while(n % 2 == 0) {
        cout << "2" << " ";
        n = n/2;
    }

    // Now n will be odd composite or prime
    for(int i = 3; i <= sqrt(n); i += 2) {
        while(n%i == 0) {
            cout << i << " ";
            n = n/i;
        }
    }

    // Now there is chance that n is left behind if n before entering in the loop is a prime number because if n is a prime number than square root won't exist and even if we calc its sqrt then no number between i=3 to i=srtn will divide or finish off the number n because actual n exists beyond this range for eg. take eg of n = 13 before entering or n = 17 you'll get it
    // if by any means you want to eliminate this step then i <= n not sqrt(n) as then it will go to that number

    if(n > 2) {
        cout << n;
    }
}

// We will apply normal Prime Factorization in this. This is the best method as simple maths is used here
void primeFactors2(int n) {
    int c = 2;
    while(n > 1) {
        if(n % c == 0) {
            cout << c << " ";
            n = n / c;
        }
        else {
            if(c % 2 == 0) {
                c++;            // initially c will be 2 only when n becomes odd so first we want a transition from c 2 to 3
            }
            else {
                c+=2;           // this can also be the case because initially all the 2's factor will be extracted out. Pointer will come in this else only when n becomes odd and after this situation there is no need to check for even c's we can get answer with c+=2 as well
            }
        }
    }
}

void primeFactors3(int n) {
    int c = 2;
    while(n > 1) {
        if(n % c == 0) {
            cout << c << " ";
            n = n / c;
        }
        else {
            c++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    //primeFactors1(n);
    primeFactors2(n);
    return 0;
}