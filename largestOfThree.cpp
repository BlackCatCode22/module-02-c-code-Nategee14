// Nate 9-8-24
// largestOfThree

#include <iostream>
using namespace std;

// Defining function for my program.
int largestOfThreeNumbers (int, int, int);

int main() {
    // Assigning values to integers.
    int largest = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // Asking the user for three numbers
    cout << "Think of three numbers, type the first number now: " << endl;
    cin >> num1;
    cout << "Type the second number now: " << endl;
    cin >> num2;
    cout << "Type the third number now: " << endl;
    cin >> num3;
    // Using the inputted values as arguments for the function.
    largest = largestOfThreeNumbers(num1, num2, num3);
    cout << "The largest number out of these three numbers is: " << largest << endl;

    return 0;
}

// Function for finding the largest number out of a set of three numbers.
int largestOfThreeNumbers(int num1, int num2, int num3) {
    int largest = 0;
    if ((num1 > num2)  && (num1 > num3)) {
        largest = num1;
    }
    if ((num2 > num1) && (num2 > num3)) {
        largest = num2;
    }
    if ((num3 > num1) && (num3 > num2)) {
        largest = num3;
    }
    return largest;
}