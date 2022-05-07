#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, T, M;
        cin >> S >> T;
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == T[i])
            {
                M.append("G");
            }
            else
            {
                M.append("B");
            }
        }
        M[S.length()] = '\0';
        cout << M << endl;
    }
    return 0;
}