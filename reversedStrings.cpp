// Nate 9-8-24
// reversedStrings

#include <iostream>
using namespace std;

int main() {
    string userInput = "";

    // Getting a string from the user.
    cout << "Type any string of letters and/or words: " << endl;

    // Defining userInput as the line of string the user inputted.
    getline(cin, userInput);

    // Reversing the string for the user.
    reverse(userInput.begin(), userInput.end());
    cout << "Here is your string in reverse!: " << userInput << endl;
    return 0;
}
