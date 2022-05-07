// // Is question ki game ye hai ki humare paas ek string hai, aur hum level by level ek index ke basis par swap karte jaayenge variable
// // aur level by level swap karne ki wjha se ek recursion tree ban jaayega humare paas 
// /*

//                                                                 abc

//                                                     abc         bac          cba

//                                                 abc     acb bac     bca cba     cab

// */


// #include<bits/stdc++.h>
// using namespace std;

// void permutations(string str, int index) {
//     // BASE CASE
//     if(index == str.size()) {                           // ab index agar size ke barabr ho gaya to bass string cout karwa do
//         cout << str << endl;
//         return;
//     }
//     // RECURSIVE CASE
//     for(int j = index; j < str.size(); j++) {           // jab hum index se lekr last tak ke saare elements se ek ek karke swap karwa rahe hai to index se lekr last tak ka element tak iterate karne ke liye ek for loop chaiye hoga hume
//         swap(str[index], str[j]);                       // ab hum at a time ek variable ko index waale usse swap karenge
//         permutations(str, index + 1);                   // yaha humne aage ka kaam recursion ko pakda diya ki bhaai aage ka aap karlo, aur yaha i+1 karne ka matlab hai ki wo ek naye level par chala jaayega
//         swap(str[index], str[j]);                       // ab ye dobara swap isliye hua hai, because arrays and strings are by default passed by refrence not by value, so agar hum final node tak phoch ke tree return kar rahe hai, to although
//                                                         // humara function aur uske variables to destroy ho jaayenge but hum normally expect karte hai ki variables apni purani values waapis se retain kar lenge but array aur string nahi karenge,
//                                                         // yaar ye to dikkat hai kyuki agar mene purani state attain nahi kari varibles ki to aage ke swap me dikkat hogi kase
//                                                         // for ek abc se bac banta hai jab first level ke 2nd part me to usse dekho, ab 3rd part hai mera cba but cba kaese bana? wo bana meri original string me swap karke naa ki bac me swap karke
//                                                         // to bass hum yaha samjh gaye ki original process maangta hai ki bac se abc waapis bane kaese tese taaki abc ke 3rd swap me hume cba mile 
//                                                         // kyuki essa nahi kiya to inconsistent ho jaayega becuase abc ka 3rd swap deta hai cba aur bac ka 3rd swap deta hai cab and cba != cab
//                                                         // to waapis waha jaane ke liye hume same swap firse karna padega taaki process nullify ho jaaye so again 2nd swap karenge bac me wo abc ban jaayega
//                                                         // that's it game over
//     }   
// }

// int main() {
//     string str;
//     cin >> str;
//     permutations(str, 0);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void permutations(string str, int i) {
    // BASE CASE
    if(i == str.size()) {
        cout << str << endl;
        return;
    }
    // RECURSIVE CASE
    for(int j = i; j < str.size(); j++) {
        swap(str[i], str[j]);
        permutations(str, i + 1);
        swap(str[i], str[j]);
    }
}

void permutations2(string in, string out, int i, int j) {
    // BASE CASE

    // RECURSIVE CASE
    
}

int main() {
    string str;
    cin >> str;
    permutations(str, 0);
    return 0;
}