#include <iostream>
using namespace std;


int minNum(int a, int b){
    return a<b? a :b;
}

int main(){
    int result = minNum(2, 4);
    cout<<result;
    

    return 0;
}       