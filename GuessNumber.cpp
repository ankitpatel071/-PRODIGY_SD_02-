#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1; // Random number from 1 to 100
    int userGuess = 0; // Variable to store user's guess
    int attemptCount = 0; // Counter for the number of attempts

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until the user guesses the correct number
    do {
        // Prompt the user for their guess
        cout << "Enter your guess: ";
        cin >> userGuess; // Get the user's guess
        attemptCount++; // Increment attempt counter

        // Provide feedback based on the user's guess
        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << randomNumber << "!" << endl;
            cout << "It took you " << attemptCount << " attempts to guess correctly." << endl;
        }
    } while (userGuess != randomNumber); // Continue until the correct guess is made

    return 0; // Indicate successful completion
}
