#include<iostream>
using namespace std;

void PatternPrint(int n){
    for(int i = 1; i <= n; i++) {
        
        // Printing space1
        for(int space = 1; space <= n - i; space++){
            cout<<" ";
        }

		// Printing the whole rhombus and leaving spaces
        for(int j = 1; j <= n; j++) {
			if((i == 1 || i == n) || (j == 1 || j == n)) {
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
	
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    PatternPrint(n);
    return 0;
}