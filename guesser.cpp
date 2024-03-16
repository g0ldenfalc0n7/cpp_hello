#include <iostream>
#include <string>

int main() {
    std::cout << "Think of a number between 1 and 9999999999. If I guess correctly, I win. If I don't, you win." << std::endl;
    std::cout << "So that you cannot cheat, once you have it in mind, please enter it here: ";

    int userNumber;
    std::cin >> userNumber; // Capture the user's number

    // Regardless of the input, claim that the program guessed it correctly.
    std::cout << "Amazing! I was also thinking of " << userNumber << "! I guessed it correctly! Better luck next time..." << std::endl;

    return 0;
}
