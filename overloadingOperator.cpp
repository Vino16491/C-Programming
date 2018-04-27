#include<iostream>
using namespace std;
// Unary Operator Overloading
class space{

    int x, y, z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-();

};


void space :: getdata(int a, int b, int c){

    x = a;
    y = b;
    z = c;
}

void space :: display(void){

    cout<< x << " ";
    cout<< y << " ";
    cout<< z << " ";
}

void space :: operator-(){

    x = -x;
    y = -y;
    z = -z;
}

class complex{

    float x, y;

public:
    complex(){};
    complex(float real, float imag){
        x = real;
        y = imag;
    }

    complex operator+(complex);
    void display(void);
};
// Binary Operator Overloading
complex complex :: operator+(complex c){

    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}

void complex :: display(void){

    cout<< x << " + j " << y << "\n";
}
int main(){

    space S;
    S.getdata(-10, 20, 30  );

    cout<< "S : ";
    S.display();

    -S;

    cout<< "-S : ";
    S.display();


// Binary Operator Overloading

complex C1, C2, C3;
C1 = complex(2.5, 3.5);
C2 = complex(1.6, 2.7);
C3 = C1 + C2;

cout<< "C1 = "; C1.display();
cout<< "C2 = "; C2.display();
cout<< "C3 = "; C3.display();

    return 0;
}
