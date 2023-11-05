// BigReal.h (Header file)
#ifndef BIGREAL_H
#define BIGREAL_H

#include <string>
#include <iostream>

using namespace std ;

class BigReal {
private:
    string realNumber, fraction , result;
    bool isValidReal(const string& realNumber) const;

public:
    BigReal(double realNumber = 0.0);
    BigReal(const string& realNumber);
    BigReal(const BigReal& other);

    BigReal& operator=(const BigReal& other);

    void setNum(const string& realNumber);

    int size() const;
    int sign() const;

    BigReal operator+(const BigReal& other) const;
    BigReal operator-(const BigReal& other) const;
    bool operator<(const BigReal& other) const;
    bool operator>(const BigReal& other) const;
    bool operator==(const BigReal& other) const;

    void print() const ;

    friend ostream& operator<<(ostream& out, const BigReal& num);


};

#endif

