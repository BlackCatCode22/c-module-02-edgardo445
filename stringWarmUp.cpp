#include <iostream>
#include <string>
using namespace std;

//References
//https://www.w3schools.com/cpp/cpp_strings_input.asp




int main() {
    cout << "\n\n Welcome to my String Warmup Program\n\n";
    cout << "\n Created in class on Aug 25, 2025\n";

    // Create a string object named test1.
    string test1 = "abcdeghi";

    // Output my string object
    cout << "\n The value of my string object is: " <<test1 << endl;

    // Use a handy dandy method from the string library to find its length.
    cout << "The length of myStrObject is: " << test1.size() << endl;

    // Create a variable that hold the length of our string
    int lengthOfString = 0;


    cout << "test1[1]: " << test1.size() << endl;
    cout << "test1.at(3) : " << test1.at(3) << endl;

    test1[2] = 'C';
    cout << test1 << endl;

    test1 = test1 + "jklmnop";
    test1 += "qrstu";
    test1.append("vwxyz");
    cout << test1 << endl;

    cout << "length: " << test1.length() << endl;

    string test2 = "123";
    string test3;

    test3 = test1 + test2;
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    test3.clear();
    cout << "test3: " << test3 << endl;

    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;

    string test4 = to_string(-10.5);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;

    string test5 = "A test string";
    string sub = test5.substr(2,4);
    cout << "sub: " << sub << endl;

    string name;
    cout << "Enter your name: ";
    //cin >> name;
    getline(cin, name);
    cout << "Name: " << name << endl;


    return 0;
}

