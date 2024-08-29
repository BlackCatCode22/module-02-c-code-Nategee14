// nG 8-28-24
// functionPractice

#include <iostream>
using namespace std;
string oddOrEven(int);

// Create and use the following four functions.
int sumTwoWholeNumbers(int, int);
int squareANumber(int);
string sayHelloToTheUser(string);
int largestOfThreeWholeNumbers(int, int, int);

int main() {
    string oddOrEvenString = "";
    string userName = "";
    int number = 0;
    int sumTwoNumbers = 0;
    int number1 = 0;
    int number2 = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int squaredNumber = 0;
    int largestBetweenThreeNumbers = 0;

    // Get input from the user for oddOrEven function.
    cout << "Please enter a number: " << endl;
    cin >> number;

    // Call the oddOrEven function.
    oddOrEvenString = oddOrEven(number);
    cout << "The number is " << oddOrEvenString << endl;

    // Getting user input for sumTwoWholeNumbers function.
    cout << "\nPlease enter a number: " << endl;
    cin >> number1;
    cout << "\nPlease enter another number: " << endl;
    cin >> number2;
    sumTwoNumbers = sumTwoWholeNumbers(number1, number2);
    cout << "\nThe sum of these two numbers is: " << sumTwoNumbers << endl;

    // Getting user input for squareANumber function.
    cout << "\nPlease enter a number: " << endl;
    cin >> number;
    squaredNumber = squareANumber(number);
    cout << "\nThe square of the number is: " << squaredNumber << endl;

    // Getting three numbers from the user to find the largest of them.
    cout << "Think of three numbers and type the first one now: " << endl;
    cin >> n1;
    cout << "Type the second number now: " << endl;
    cin >> n2;
    cout << "Type the third number now: " << endl;
    cin >> n3;
    cout << "The largest number of all three is: " << largestOfThreeWholeNumbers(n1, n2, n3) << endl;

    // Getting the user's name to greet them!
    cout << "Hello! What is your name?: " << endl;
    cin >> userName;
    sayHelloToTheUser(userName);

    return 0;
}

// Function for finding out whether a number is even or odd.
string oddOrEven(int number) {
    string myReturnStr = "";

    if (number % 2 == 0) {
        // number is even.
        myReturnStr = "even.";
    }
    else {
        // number is odd.
        myReturnStr = "odd.";
    }
    return myReturnStr;
}

// Function for adding two numbers together.
int sumTwoWholeNumbers(int number1, int number2) {
    int sum = 0;
    sum = number1 + number2;
    return sum;
}

// Function for squaring a number.
int squareANumber(int number) {
    int square = 0;
    square = number * number;
    return square;
}

 // Function for saying hello to the user.
string sayHelloToTheUser(string name) {
    cout << "Hello " << name << "!" << endl;
}

// Function for finding the largest number out of a set of three numbers.
int largestOfThreeWholeNumbers(int num1, int num2, int num3) {
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