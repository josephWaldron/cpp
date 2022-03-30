#include<iostream>

using namespace std;

int main()
{
    int secretnum = 69;
    int guess;
    int count = 0;
    int guessLimit = 3;
    bool outOfGuess = false;

    while (secretnum != guess && !outOfGuess)
    {
        if (count < guessLimit)
        {
           cout << "Guess: ";
            cin >> guess;
            count++;
        }else{
            outOfGuess = true;
        }
        
        
    }
    cout << "Nice";
    return 0;
}