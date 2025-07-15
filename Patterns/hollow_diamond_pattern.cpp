#include <iostream>
using namespace std;

int main(){
    int n= 10;

    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<<' ';
        }
        cout<<'*'; // print starts

        // print spaces
        for(int j=0; j<i*2-1; j++){
            cout<<' ';
        }

        // print stars
        if(i!=0){
            cout<<'*';
        }

        cout<<endl;
    }

    for(int i = 1; i<n; i++){
        // spaces
        for(int j=0; j<i; j++){
            cout<<' ';
        }
        cout<<'*'; // print stars

        // print spaces
        for(int j=0; j<(n-1-i) * 2 -1; j++){
            cout<<' ';
        }

        // print stars
        if(i != n - 1){
            cout<<'*';
        }

        cout<<endl;
    }

    return 0;
}