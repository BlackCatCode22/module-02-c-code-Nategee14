#include <iostream>
 using namespace std;

int main()
{
    cout << "Welcome to my String Program!" << endl;

    // Create a string object.
    string myStringObject;

    // assign a value to out new string object!
    myStringObject = "This is an abdcdefg string";

    //Output our string.
    cout << "\n" << myStringObject << endl;

    // Get the size of my string.
    cout << "The size of my string is: " << myStringObject.size() << " characters long." << endl;

    // Create two char variables.
    char myChar01;
    char myChar02;

    // Assigned char variables specific subscripts.
    myChar01 = myStringObject[1];
    myChar02 = myStringObject[13];

    // Output the chars at subscripts (or position numbers) 2 and 14.
    cout << "the character at position 2 is: " << myChar01 << "\nAnd the character at position 14 is: " << myChar02 << endl;

    // Use the at() function to get the char at subscript 16
    cout << "\n The character at subscript 16 is " << myStringObject.at(17) << "\n";

    char anotherChar;
    anotherChar = myStringObject.at(17);
    cout << "\n The character at subscript 16 is " << anotherChar << "\n";

    // Concatenate two strings.
    string anotherString = " by the way";
    string twoStrings = "";

    // Join (concatenate) two strings and output the result.
    twoStrings = myStringObject + anotherString;
    cout << "\n twoStrings is " << twoStrings << "\n";

    //substr() is very important and useful.
    string mySubString = "";
    mySubString = myStringObject.substr(5,2);
    cout << "\n mySubString is: " << mySubString << "\n";



    return 0;
}
