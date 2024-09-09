// Nate 9-8-24
// funWithFunctions

#include <iostream>
using namespace std;

// Defining functions for my program.
int getAnIntFromUser ();
int getAnotherIntFromUser();
int compareTwoInts (int, int);
int sumTwoInts (int, int);

int main() {
    // Assigning values to integers.
    int integer1 = 0;
    int integer2 = 0;
    int comparison = 0;
    int sumNumber1 = 0;
    int sumNumber2 = 0;

    // Defining integers as the integers gathered from the user.
    integer1 = getAnIntFromUser();
    integer2 = getAnIntFromUser();

    // Comparing the two integers given by the user.
    comparison = compareTwoInts(integer1, integer2);
    cout << "Between those two integers, " << comparison << " is the larger integer." << endl;

    // Adding the two integers given by the user.
    cout << "Please think of two integers, type the first one here: " << endl;
    cin >> sumNumber1;
    cout << "Please type the second one here: " << endl;
    cin >> sumNumber2;
    cout << "The sum of these two integers is: " << sumTwoInts(sumNumber1, sumNumber2) << endl;

    return 0;
}

// Function that gets an int from the user and returns the value.
int getAnIntFromUser () {
    int input1 = 0;

    cout << "Enter an integer/number: ";
    cin >> input1;
    return input1;
}

// Function that compares two integers given by the user and compares them; finding which one is larger.
int compareTwoInts (int num1, int num2) {
    int largest = 0;
    if (num1 < num2) {
        largest = num2;
    }
    else if (num1 > num2) {
        largest = num1;
    }
    return largest;
}

// Function that adds two integers together from the user and returns the sum.
int sumTwoInts(int number1, int number2) {
    int sum = 0;
    sum = number1 + number2;
    return sum;
}