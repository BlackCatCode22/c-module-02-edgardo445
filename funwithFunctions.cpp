// funWithFunctions.cpp
// eS

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Create three functions:

// getAnIntFromTheUser
// input: the user's name
// processing: ask the user for an integer value
// output: the user's number
int getAnIntFromTheUser(string userName) {
    // prompt the user for a number (a whole number aka an int)
    int anIntFromTheUser;

    cout << "\n Hello, " + userName + ", please enter a whole number: ";
    cin >> anIntFromTheUser;

    return anIntFromTheUser;
}


int name (int num1, int num2) {
return num1 + num2;



}

int main() {
    cout << "\n...Welcome to my awesome Fun With Functions program!..\n";

    // Variables needed
    // I need a variable to hold the user's name.
    string userName;
    // Get an int from the user by calling (invoking) your function
    int aRandomNumber = 0;

    // Get the user's name.
    cout << "\n Hello user, what is your name? ";
    cin >> userName;
    cout << "\n userName is: " << userName << endl;

    // Call (invoke) the function named getAnIntFromTheUser() with a string argument
    aRandomNumber = getAnIntFromTheUser(userName);
    cout << "\n\n" + userName + " entered: " << aRandomNumber << endl;


    // AddTwoInts
    // Initialize all my variables.
     int num1;
     int num2;
    cout << "\n Please enter a value for num1: ";
    cin >> num1;
    cout << "\n Your entered " << num1 <<" for num1";
    cin >> num2;

    int sum = name(num1, num2);
    cout << "the sum is: " << sum;


    return 0;
}
