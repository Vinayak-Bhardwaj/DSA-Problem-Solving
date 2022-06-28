#include<bits/stdc++.h>
using namespace std;

bool isValid(int diffx, int diffy) {
    
    //1. if x1 == x2
    if(diffx == 0 && (diffy == 2 || diffy == 4)) {
        return true;
    }

    //2. if y1 == y2
    else if(diffy == 0 && (diffx == 4 || diffx == 2)) {        
        return true;
    }

    //3. if both different
    else {
        if( (diffx == 1 || diffx == 3) && (diffy == 1 || diffy == 3) ) {
            return true;
        }
        else if(diffx == 2 && diffy == 4) {
            return true;
        }
        else if(diffx == 4 && diffy == 2) {
            return true;
        }
    }

    return false;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int diffx = abs(x1 - x2);
        int diffy = abs(y1 - y2);

        if(x1 == x2 && y1 == y2) {
            cout << "NO";
        }
        else if(isValid(diffx, diffy)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        
        cout << endl;
    }
    return 0;
}