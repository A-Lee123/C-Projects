#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Prompt user for a a 5-letter word
    string guess = "", answer = "CHIPS";
    char letter; 
    string red = "\033[1;31m", green = "\033[1;32m", yellow = "\033[1;33m", reset = "\033[0m";

    cout << "Welcome to Wordle!" << endl;
    
    int numGuesses = 0;
    while (numGuesses < 6 && guess != answer) {
        cout << "Please enter a 5-letter word: ";
        cin >> guess;

        // Print letter colors
        for (int index = 0; index < guess.length(); index++) {
                letter = toupper(guess[index]);
                if (letter == answer[index]) {
                    cout << green << letter << " - is green" << reset << endl;
                } else if (letter != answer[0] && letter != answer[1] && letter != answer[2] && letter != answer[3] && letter != answer[4]) {
                    cout << red << letter << " - is red" << reset << endl;
                } else {
                    cout << yellow << letter << " - is yellow" << reset << endl;
                }
        }
        numGuesses++;
    }
    if (guess == answer) {
        cout << "Congratulations! You won the game!" << endl;
        cout<< "It took you " << numGuesses << " tries to finish" << endl;
    } else {
        cout << "Sorry, you did not win. Better luck next time!" << endl;
    }

}
