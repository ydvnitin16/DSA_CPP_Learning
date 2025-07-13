#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter your character: ";
    cin >> ch;
    if (ch >= 97 && ch <= 122) {
        cout << "Given character is lowercase\n";
    } else if (ch >= 65 && ch <= 90){
        cout << "Given character is uppercase";
    } else {
        cout << "Invalid Character";
    }
    
    int number = -4;
    cout << ((number >= 0) ? "Positive" : "Negative");


    return 0;
};

// Conditional Statements
// if-else
// if(conditon){
//      if condition true then run this block
//  }else{
//      otherwise this block
//  }

// else-if
// if(conditon){
//      if condition true then run this block
//  }else if(condition){
//      if this condition true then this block
//  }else{
//      otherwise run this block
//  }

// ternary operator / statement
// (condition) ? if true run this : otherwise this;