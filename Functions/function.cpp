#include <iostream>
using namespace std;

// void means function not return anything similar to data types
void printHello(){
    cout<<"Hello World\n";
}

int main(){

    printHello(); // call the function to execute the code block of function
    cout<<"Work Done.";

    return 0;
}

// Funtion in memory

//                 Stack
//           |               |
//           |               |
//           |               |
//           |               |
//           |               |
//           |_______________|
//           |               |
//           |    var, var   |
//           |  printHello   | <- Execution is always on the TOP of that stack
//           |_______________|
//           |               |
//           |main() var, var| <--- Stack Frame
//           |_______________|
//               callstack

// When printHello done its work it removed from the stack and execution returns to the main function
// as a new function called it takes its space on TOP of the stack

// function's variable stores in its stack frame


// Call by value :- 

// variable or value is passed
// execution performed on the copy of the argument
// any changes made to that copy not reflect to the actual passed variable


// Call by reference:-

// address of variable is passed
// execution performed on the passed variable
// any changes made to that variable reflect to the actual varibale because address is passed of that variable