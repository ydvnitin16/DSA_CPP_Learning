#include <iostream>
using namespace std;

int main(){
    float n = 5;
    int count = 1;
    int fact = 1;
    while(count <=n){
        fact *= count;
        count++;
    }
    cout<<fact;

    return 0;
}