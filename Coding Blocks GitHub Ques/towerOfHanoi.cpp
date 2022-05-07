// again hum process par game khel rahe hai, humne kaha ki bhaiyya hum hai aalsi aadmi to agar recursion mujhe n-1 disks uthakr source se helper
// par rakhde to mere paas helper me n-1 disks hongi source me sirf 1 nth disk aur destintion khaali, to me kya karunga ki me itna to kaam
// kar sakta hu to me nth disk uthakar source se destination par rakh dunga aur recursion ko kahunga ki bhaiyya tu ab wo n-1 disk uthakar 
// destination me nth disk ke upar rakh de aur mera kaam khatam.


#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination) {
    // BASE CASE
    if(n == 0) {
        return;
    }
    // RECURSIVE CASE
    towerOfHanoi(n - 1, source, destination, helper);               // humne recursion ko kaha ki bhaai n-1 disks source se helper par rakhde aur chahe to destination ki help le sakta ha 
    cout << "Take the disc " << n << " and move it from " << source << " to " << destination << endl;           // Aur ye humne kiya apna kaam ki nth disk uthakar rakh di
    towerOfHanoi(n-1, helper, source, destination);                 // aur humne firse recursion ko kaha ki bhaai n-1 disks uthakar helper se destination par rakhde aur chahe source ki help le sakta ha
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void towerOfHanoi(int n, char source, char helper, char destination) {
//     // BASE CASE
//     if(n == 0) {
//         return;
//     }
//     // RECURSIVE CASE
//     towerOfHanoi(n - 1, source, destination, helper);
//     cout << "Shifting the disk " << n << " from " << source << " to " << destination << endl;
//     towerOfHanoi(n - 1, helper, source, destination);
// }

// int main() {
//     int n;
//     cin >> n;
//     towerOfHanoi(n, 'A', 'B', 'C');
//     return 0;
// }
