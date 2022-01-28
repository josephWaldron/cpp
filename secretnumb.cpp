#include<iostream>

using namespace std;

int main()
{
    int secretnum = 69;
    int guess;

    while (secretnum != guess)
    {
        cout << "Guess: ";
        cin >> guess;
    }
    cout << "Nice";
    return 0;
}