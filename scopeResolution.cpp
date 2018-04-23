#include<iostream>

using namespace std;

int m = 10;

int main(){

    int m = 20;

    {
        int k = 3;
        int m = 30;

        cout<< "We are in inner block \n";
        cout<< "k = " << k << "\n";
        cout<< "m = " << m << "\n";
        cout<< "::m = " << ::m << "\n";
    }

    cout<< "\n We are in outer block \n";
    cout<< "m = " << m << "\n";
    cout<< "::m = " << ::m << "\n"; /* using scope resolution operator :: gives access to global variable*/

    return 0;

}
