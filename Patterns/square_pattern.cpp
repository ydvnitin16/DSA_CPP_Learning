#include <iostream>
using namespace std;

// print similar pattern of Number, Star, Alphabet
int main(){
    int n = 4;
    for(int i = 1; i<=n; i++){
        char ch = 'A';
        for(int j = 1; j<=n; j++){
            cout<<ch<<' '; // to print star change ch to star & print number by changing ch to j
            ch = ch + 1;
        }
        cout<<endl;
    }

    return 0;
}

// Print square pattern with countinous count
int main(){
    int n =3;
    char ch = 'A'; // To print number change this char ch to int num and initialse number to it

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<ch<<' ';
            ch++;
        }
        cout<<endl;
    }

    return 0;
}