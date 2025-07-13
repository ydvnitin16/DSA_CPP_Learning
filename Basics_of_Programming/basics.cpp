// Boilerplate Code
#include <iostream>
using namespace std;

int main() {
    int a = 10, b= 3;
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    int product = a * b;
    cout << "Product: " << product << endl;
    float divide = a / (float)b;
    cout << "Divide: " << divide << endl;
    int remainder = a % b;
    cout << "Remainder: " << remainder << endl;

    cout << (a==b);

    return 0;
};


// Variables:- Containers to store data in memory 
//     Rules:- must start with alphabet or _

// Data Types:- type of data stored in the variable
// Types :- 
// 1. int:- store integar values 
//              -- e.g. 1,2,5,84,223 
//                  --4 bytes 
// 2. char:- store single character 
//              -- e.g. 'a', 'A', 'c' --> stored as ascii value means 'a' = 97 'b' = 98... & 'A' = 65...
//                  --1 byte
// 3. float:- store decimal values 
//              -- e.g. 2.3, 442.4 
//                  --4 bytes
// 4. bool:- store boolean value 
//              -- e.g. true = 1, false = 0 
//                  --1 byte
// 5. double:- also stores integar and decimal values 
//                  --8 bytes


// Type Conversion:- lower data type automatically converts to higher data type e.g char('A') -> int(65)
//          implicit - means done by compiler itself
// Type Casting:- data type converted by programmer himself to change data type -->double var -> (int)var
//          explicit - means done by programmer, not by compiler
// double -> int (removes the decimal values)
// int -> 


// input is taken by cin >> var;
// output is done by cout << var;

// Operators

// Airthmetic operators
// 1. '+' addition
// 2. '-' subtraction
// 3. '*' multiply
// 4. '/' division
// 5. '%' modulo - means remainder

// To get float values one of operand need to be float or double

// Relational operator
// 1. < less than
// 2. <= less than equal to
// 3. > greater than
// 4. >= greater than equal to
// 5. == equal to
// 6. != not equal to
// This operators always return true or false


// Logical operator
// 1. || OR operator at least one condition need to be true
// 2. && AND operator all conditions need to be true
// 3. ! NOT operator opposite the boolean value true into false and vice-versa
// These operators used with the conditions

// Uranary Operator --- means 1 & binary means 2
// Increment: increment value by one increment++(post) -> work then increment & ++increment(pre) -> increment then work
// decrement: decrement value by one decrement--(post) --decrement(pre)