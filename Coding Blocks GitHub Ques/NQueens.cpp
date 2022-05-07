/*
    game iss question ka thoda elephant ways ki tarah hai, ki hum pehli baat dekhenge ki kisi point par rkhna valid hai ki nahi, uske liye
    humne ek alag se function bana rakha hai, ab hum actual board par ek loop lekr sirf aur sirf first row me ek ek column par rakhkar dekhenge
    queen, aur aage recursion ko bolenege ki 1st row ki is placement ke according agar aage queens ka arrangement possible hai to batao
    me true pass kar deta hu, but nhi hai to wo bhi batao me false likh du
*/


#include<bits/stdc++.h>
using namespace std;

int a = 0;

bool canWeKeeptItHere(int maze[10][10], int n, int i, int j) {

    //We are keepting it from top to bottom so we have to verify the placements by seeing the above placed queens only

    // 1. checking the same corresponding row and column
    for(int k = 0; k < n; k++) {
        if(maze[i][k] || maze[k][j]) {
            return false;
        }
    }

    //Checking the right diagnol
    int row = i;
    int column = j;
    while(row >= 0 && column < n) {
        if(maze[row][column]) {
            return false;
        }
        row--;
        column++;
    }
    
    //Checking the left diagnol
    while(i >= 0 && j >= 0) {
        if(maze[i][j]) {
            return false;
        }
        i--;
        j--;
    }

    //If none of them is passed then return true
    return true;
}

bool NQueen(int board[10][10], int i, int n) {
    // BASE CASE
    if(i == n) {
        
        // matlab hum succesfully neeche tak phoch gaye to bass solutions print kardo
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl << endl;
        a++;
        
        //return true;
        
        // To print all the solutions
        return false;
    }
    // RECURSIVE CASE

    //Game is ki hum bas first row me element khud rakhenge aur baaki ka recursion se puchenge ki agar first row ki iss position par queen rakhne se neeche ke arrangement possible ho paa raha hai to badiya mil gaya solution, but agar neeche ka arrangement nahi mil paa raha to humne khud hi galat positon par rakha hai aur isse agli par try karo
    //Ab 1st row me har point par ek ek baar element try karne ke liye ek iterator lo aur usse chalao aur dekho ek ek jagah rakh kar
    for(int j = 0; j < n; j++) {

        // ab elephant ways ki tarah hi pehle check karo ki rakhna sahi hai yaa nahi
        if(canWeKeeptItHere(board, n, i, j)) {
            // so yes we can keep it here and let's do it and make this as solution and ask recursion for furthere arrangement

            board[i][j] = 1;
            if(NQueen(board, i + 1, n)) {

                //i.e yes aage possible hai to return true
                return true;

            }

            //Agar true nahi hai to assumption galat thi, usse backtrack karke theek karo and agle j par try karo
            board[i][j] = 0;
        }
    }
    
    //Ab agar rprogram yaha par hai to matlab usne saare j par try karke dekh liya 1st row ke aur usse kisi par bhi solution naa mila
    return false;
}

int main() {
    int board[10][10] = {0};
    int n;
    cin >> n;
    NQueen(board, 0, n);
    cout << "Number of solutions : " << a << endl;
    return 0;
}