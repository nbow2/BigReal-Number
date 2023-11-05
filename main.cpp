// File: task 2.cpp
// Purpose: task 2
// Author: ………………….
// Section: s9 ,s10
// ID: 20210912,20210725,20210739
// TA: samar sabry
// Date: 5 /nov/ 2023

#include <iostream>
#include "BigReal.h"

using namespace std;

int main() {


            //Test -1:
            BigReal n10 ("11.9000000000000000000000000000000001");
            BigReal n2 ("2333333333339.1134322222222292");
            BigReal n3 = n10 + n2;
            cout << n3;
            cout<<endl;
            n3 = n3 + BigReal (999.9);
            cout << n3;

            //Test 0: print function form a string & double
            BigReal n0(28948234254.10);
            BigReal n1("234098243.998");
            cout << endl ;
            cout <<"Test 0: print function :" ;   n0.print() ;
            cout <<"Test 0.1 : print function :"; n1.print();

            // Test 1: Create a BigReal from a double
            BigReal num1 = 123.456;
            cout << "Test 1: Created from double: " << num1 << endl;

            // Test 2: Create a BigReal from a string
            BigReal num2("11.9000000000000000000000000000000001");
            cout << "Test 2: Created from string: " << num2 << endl;

            // Test 3: Copy constructor
            BigReal num3 = num1;
            cout << "Test 3: Copy constructor: " << num3 << endl;

            // Test 4: Assignment operator
            BigReal num4;
            num4 = num3;
            cout << "Test 4: Assignment operator: " << num4 << endl;

            // Test 5: Set number using a string
            num4.setNum("90807060");
            cout << "Test 5: Set number using a string: " << num4 << endl;

            // Test 6: Size of the number
            cout << "Test 6: Size of num4: " << num4.size() << endl;

            // Test 7: Sign of the number
            cout << "Test 7: Sign of num4: " << num4.sign() << endl;

            // Test 8: Addition
            BigReal num0("-100000000000.220");
            BigReal num9("-222222222222.110") ;
            BigReal sum = num9 + num0;
            cout << "Test 8: Addition: " << sum << endl;

            // Test 9: Subtraction
            BigReal diff = num1 - num2;
            cout << "Test 9: Subtraction: " << diff << endl;

            // Test 10: Less than
            bool isLess = num1 < num2;
            cout << "Test 10: Less than: " << isLess <<endl;

            // Test 11: Greater than
            bool isGreater = num1 > num2;
            cout << "Test 11: Greater than: " << isGreater << endl;

            // Test 12: Equality
            bool isEqual;
             isEqual = num2 == num3;
            cout << "Test 12: Equality: " << isEqual << endl;
//         catch (const std::invalid_argument& e) {
//            std::cerr << "Error: " << e.what() << std::endl;
//        }



    return 0;
}
