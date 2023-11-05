#include "BigReal.h"
#include <iostream>
#include <stdexcept>

using namespace std ;

// Constructor for initializing from a double
BigReal::BigReal(double realNumber) {
    // Convert double to string
    this->realNumber = to_string(realNumber);
    if (!isValidReal(this->realNumber)) {
        throw std::invalid_argument("Invalid real number");
    }
}

// Constructor for initializing from a string
BigReal::BigReal(const string& realNumber) {
    if (!isValidReal(realNumber)) {
        throw std::invalid_argument("Invalid real number");
    }
    this->realNumber = realNumber;
}

// Check if the string is a valid real number
bool BigReal::isValidReal(const string& realNumber) const {
    // Add validation logic here
    // Placeholder logic: You should implement real validation logic
    return true;
}

// Copy constructor
BigReal::BigReal(const BigReal& other) {
    this->realNumber = other.realNumber;
}

// Assignment operator
BigReal& BigReal::operator=(const BigReal& other) {
    if (this != &other) {
        this->realNumber = other.realNumber;
    }
    return *this;
}

// Setter method
void BigReal::setNum(const string& realNumber) {
    if (!isValidReal(realNumber)) {
        throw std::invalid_argument("Invalid real number");
    }
    this->realNumber = realNumber;
}

// Return the size (number of characters) of the real number
int BigReal::size() const {
    return realNumber.size();
}

// Return the sign of the real number (1 for positive, -1 for negative, 0 for zero)
int BigReal::sign() const {
    if (realNumber == "0") {
        return 0;
    }
    return (realNumber[0] == '-') ? -1 : 1;
}

// Addition operator
BigReal BigReal::operator+(const BigReal& other) const {
    // Implement addition logic
//    if (fraction.size() > other.fraction.size())

//        result = fraction.BigReal.

    double num1 = stod(realNumber);
    double num2 = stod(other.realNumber);
    return BigReal(num1 + num2);
}

// Subtraction operator
BigReal BigReal::operator-(const BigReal& other) const {
    // Implement subtraction logic
    double num1 = stod(realNumber);
    double num2 = stod(other.realNumber);
    return BigReal(num1 - num2);
}

// Less than operator
bool BigReal::operator<(const BigReal& other) const {
    // Implement less than logic
    double num1 = stod(realNumber);
    double num2 = stod(other.realNumber);
    return num1 < num2;
}

// Greater than operator
bool BigReal::operator>(const BigReal& other) const {
    // Implement greater than logic
    double num1 = stod(realNumber);
    double num2 = stod(other.realNumber);
    return num1 > num2;
}

// Equality operator
bool BigReal::operator==(const BigReal& other) const {
    // Implement equality logic
    double num1 = stod(realNumber);
    double num2 = stod(other.realNumber);
    return num1 == num2;
}

// Print method
void BigReal::print() const {
    cout << realNumber << endl;
}

// Stream insertion operator to print BigReal objects
ostream& operator<<(ostream& out, const BigReal& num) {
    out << num.realNumber;
    return out;
}
