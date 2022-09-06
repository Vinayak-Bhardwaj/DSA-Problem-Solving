// // Counting the frequency
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     char str[1000];
//     cin.getline(str, 1000);
//     int ct = 0;
//     for(int i = 0; i < strlen(str); i++) {
//         ct++;
//     }
//     cout << ct;
//     return 0;
// }



// // Concatination
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
    
//     char str1[1000], str2[1000];
//     cin.getline(str1, 1000);
//     cin.getline(str2, 1000);
    
//     int i = strlen(str1);
//     int j = 0;

//     while(j < strlen(str2)) {
//         str1[i] = str2[j];
//         j++;
//         i++;
//     }

//     strcat(str1, str2);      // Works the same way

//     str1[i] = '\0';
//     cout << str1;
//     return 0;
// }



// //2. Copying Chars
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     char str1[1000], str2[1000];
//     cin.getline(str1, 1000);
//     int i;
//     for(i = 0; i < strlen(str1); i++) {
//         str2[i] = str1[i];
//     }

//     str2[i] = '\0';

//     cout << "String 2: " << str2;
//     return 0;
// }




// //3. Shifting chars by +len pos
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     char str[1000];
//     cin.getline(str, 1000);

//     int len = strlen(str);
    
//     // Placing the iterator for shifting at last position len char is null and len-1 char is last char
//     int j = strlen(str) - 1;

//     while(j >= 0) {
//         str[j + len] = str[j];
//         j--;
//     }

//     str[len + len] = '\0';

//     cout << str;

//     return 0;
// }




// //4. Reverse chars
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     char str[1000];
//     cin.getline(str, 1000);

//     for(int i = 0; i < (strlen(str)/2); i++) {
//         swap(str[i], str[strlen(str)-1-i]);
//     }

//     cout << str;
//     return 0;
// }



// More Questions can be added......