#include <iostream>
using namespace std;

int main(){

    int n = 4;
    // upper part
    for(int i= 0; i<n; i++){
        for(int j=0; j<i+1; j++){ // run 0 -> i+1
            cout<<"* "; // print stars e.g:- i=2 then print 3 stars
        }

        for(int j=0; j<(n-i-1)*2-1; j++){
            cout<<"  "; // print spaces
        }

        for(int j=0; j<i+1; j++){
            if(j != n-1){
                cout<<"* ";
            }
        }
        
        cout<<endl;
    }
    // lower part
    // similar to upper part but in reverse order
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            
            cout<<"* ";
        }

        for(int j=0; j<i*2-1; j++){
            cout<<"  ";
        }

        for(int j=0; j<n-i; j++){
            if(j != n-1){
            cout<<"* ";

            }
        }

        cout<<endl;
    }


    return 0;
}
