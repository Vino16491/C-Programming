#include<iostream>
using namespace std;

class person {

    char name[30];
    int age;

public:
    void getdata(void);
    void display(void);
};

void person :: getdata(void){

    cout<< "Enter Name: ";
    cin >> name;
    cout<< "Enter age: ";
    cin >> age;
}

void person :: display(void){

    cout<< "\n NAME: " << name;
    cout<< "\n AGE: " << age;
}

int main(){

    person p;

    p.getdata();
    p.display();

    return 0;
}
