#include <iostream>
using namespace std;

int main(){

    int n = 4;

    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=i+1; j<=n; j++){
            cout<<i + 1;
        }
        cout<<endl;
    }


    return 0;
}