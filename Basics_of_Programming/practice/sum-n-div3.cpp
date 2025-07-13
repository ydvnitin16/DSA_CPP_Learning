#include <iostream>
using namespace std;

int main(){
    float n = 10;
    float sum = 0;
    int count = 0;
    while(count <= n){
        sum = count%3 == 0 ? sum + count : sum;
        count++;
    }
    cout << sum;

    return 0;
}