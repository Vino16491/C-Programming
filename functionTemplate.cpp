#include<iostream>

using namespace std;

template <class Tes>
// For Some reasons, program is not functioning
void swap(Tes x, Tes y){

    Tes temp = x;
    x = y;
    y = temp;
}

void fun(int m, int n, float a, float b){

    cout<< "m and n before swap: " << m << " " << n << "\n";
    swap(m,n);
    cout<< "m and n after swap: " << m << " " << n << "\n";

    cout<< "a and b before swap: " << a << " " << b << "\n";
    swap(a,b);
    cout<< "a and b after swap: " << a << " " << b << "\n";
}

int main(){

    fun(100,200,1.10,1.28);

    return 0;
}
