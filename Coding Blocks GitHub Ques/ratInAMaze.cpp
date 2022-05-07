/*
    Is question ki game ye hai, ki humne suppose maze draw karli aur starting par khade hokr hum do hi kaam kar sakte hain. yaa to right
    jaa sakte hain yaa down. Humne recursion ko kaha ki bhaiyya agar me right me chalta hu move, to jo n X m-1 ki maze banegi aap usme
    batado ki solution milega yaa nahi aur agar me down me jaata hu to to n-1 X m ki jo maze banegi aap usme mujhe bata do ki solution milega
    yaa nahi. To hum to kuch kar hi nahi rahe, humne bas ek ek baar right aur down jaane ke move ki validity check karli aur recursion ko choti
    choti maze banakar dedi dono cases me aur kaha ki aap dekho baaki ka. Agar dono me yaa dono me se kisi bhi ek move se true aata hai to hum
    overall true return kar denge but agar dono me true nahi aata to hum jis point par khade wo solution ka part nahi hai to hum usse 0 mark karke
    false return kardenge
*/

/*
    suppose we want to print all the solution then what we can do is ki jaise hi base case par phoch jaaye user i.e usse cheese mil jaaye
    to solution print karwanr ke baad hum usse bolde sorry solution to mila nahi ji to false return karde, and since false returb ho jaayega
    to saara 0 hota chala jaayega maze me backtracking ke time to bass wo fir intially shuru se start karega aur naya solution dhundhega
*/


#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][5], int sol[][10], int i, int j, int m, int n) {
    //BASE CASE
    if(i == n-1 && j == m-1) {

        //Since it is a part of solution as well
        sol[i][j] = 1;   
        
        //Print the solution
        for(int p = 0; p <= n-1; p++) {
            for(int q = 0; q <= m-1; q++) {
                cout << sol[p][q] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;

        // return true;
        return false;

    }
    //RECURSIVE CASE

    // Sabse pehle assume karo ki jaha hum khade hain, waha se rasta mil jaayega to since part of solution to mark as 1
    sol[i][j] = 1;

    // Check karo whether right me jaana allowed bhi hai yaa nahi
    if((j + 1 < m) && maze[i][j + 1] != 'X') {

        //Ab ye check karo ki thik hai bhaai right me jaa to sakte but recursion se pucho ki bhaiyya recursion right me jaane se hume answer milega kya koi?
        if(ratInMaze(maze, sol, i, j + 1, m, n)) {
            return true;
        }

    }

    // Ab check karo whether down jaana allowed hai yaa nahi
    if((i + 1 < n) && maze[i + 1][j] != 'X') {

        //Ab ye check karo ki thik hai bhaai down me jaa to sakte but recursion se pucho ki bhaiyya recursion down me jaane se hume answer milega kya koi?
        if(ratInMaze(maze, sol, i + 1, j, m, n)) {
            return true;
        }

    }

    // Ab agar dono jagah jaakr check karne se hi answer nahi mil raha fir to humari assumption galat thi aur point of standing is not a part of solution so mark it 0 and return false
    sol[i][j] = 0;
    return false;
}

int main() {
    char maze[][5] = {
        "0000",
        "00XX",
        "0000",
        "XX00"
    };
    int sol[10][10] = {0};
    ratInMaze(maze, sol, 0, 0, 4, 4);
    return 0;
}