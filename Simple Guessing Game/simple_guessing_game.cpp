#include <iostream>
#include <string.h>

using namespace std;

void guessing_game()
{
    string secret_word = "sultan";
    string guess_word;
    int guess_count = 0;
    int guess_count_limit = 3;
    bool out_of_guess = false;

    while (guess_word != secret_word && !out_of_guess)
    {
        if (guess_count < guess_count_limit)
        {
            cout << "Enter the secret word" <<endl;
            cin >> guess_word;
            guess_count += 1;
        }
        else
        {
            out_of_guess = true;
        }
    }

    if (out_of_guess)
    {
        cout << "Out of guesses! You Lose." <<endl;
    }
    else{
        cout << "Congratulations. You won.." <<endl;
    }
}

int main(int argc, char const *argv[])
{
    guessing_game();
    return 0;
}
