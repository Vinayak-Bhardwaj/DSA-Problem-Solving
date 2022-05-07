// What we can do is that we can extract the last prime number and compare every number with it

#include<bits/stdc++.h>
using namespace std;
#define lli long long int

bool isPrime(lli num) {
    for(lli j = 2; j < num; j++) {
        if(num % j == 0)
            return false;
    }
    return true;
}


int main() {
    lli n, pr = 2;
    cin >> n;
    //Trying to find the last prime number
    for(lli j = 2; j <= n; j++) {
        if(isPrime(j)) {
            pr = j;
        }
    }
    for(lli j = 2; j <= n; j++) {
        if(isPrime(j) && j != pr) {
            cout << j <<", ";
        }
        if(j == pr) {
            cout << pr;
        }
    }
    return 0;
}


// Patter double side arrow

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Hello Lets print the output ";
    so now what we
    ll do is we do that same again and again 
}



*/