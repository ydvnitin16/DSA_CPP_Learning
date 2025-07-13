#include <iostream>
using namespace std;

int main() {
    // Print Numbers
    int n = 5;
    int count = 1;
    while (count <= n)
    {
        cout<<count<<' ';
        count++;
    }
        cout<<'\n';

    for(int num = 6; num <= 10; num++){
        cout<<num << ' ';
    }

    // check isPrime
    int number = 6;
    bool isPrime;

    for(int i = 2; i<= number/2; i++){

        if(number%i == 0){
            isPrime = false;
            break;
        }else{
            isPrime = true;
        }
    }

    cout<< (isPrime ? "Given Number is Prime" : "Given number is Non-Prime");
    
    return 0;
};

// Loops:- do a same thing on loop till a certain condition satisfy or true
// every loop has same capability if a work can be done by one then by each can done the same just syntax is different
// Never run a infinite loop

// while loop
// while(condition){
//      run if condition true otherwise exit
// }
// first check cond then execute

// for loop
// for(initialisation; condition; updation){
//   run untill condition is true
// }
// first check cond then execute

// do while
// do{
//   execute the code 
// }while(condition)
// this loop execute first then check for the condition to run again or not