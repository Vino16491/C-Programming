#include<iostream>
using namespace std;

class item{
    static int count;
    int number;

public:
    void getdata(int a){
        number = a;
        cout<< "number is :" << number <<"\n";
        count++;
    }

    void getcount(void){
        cout<< "count: ";
        cout<< count << "\n";
    }
};

int item :: count;

int main(){

    item a, b, c;

    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<< "After reading data" <<"\n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}


