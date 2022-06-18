#include<bits/stdc++.h>
using namespace std;

void charFormat(char* str, int i) {
    // BASE CASE
    if(str[i + 1] == '\0') {
        return;
    }
    // RECURSIVE CASE

    //1. To identify duplication
    if(str[i] == str[i + 1]) {
        
        //2. To shift all chars one step ahead
		int j = i + 1;
		while(str[j] != '\0') {
			j++;
		}
		
        while(j >= (i + 1)) {
            str[j + 1] = str[j];
            j--;
        }

        //3. To insert a * at place
        str[i + 1] = '*';
		charFormat(str, i + 2);	
    }
	else {
		charFormat(str, i + 1);
	}
    
}

int main() {
    char str[1000];
    cin >> str;
    charFormat(str, 0);
    cout << str;
    return 0;
}