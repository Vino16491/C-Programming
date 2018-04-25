#include<iostream>
using namespace std;
int count = 0;

class alpha{

public:
    alpha(){
        count++;
        cout<<"\n No. of Objects created "<< count;
    }
    ~alpha(){

        cout<<"\n No of Objects destroyed "<< count;
        count--;
    }
};

int main(){

    cout<< "\n\n Enter in MAIN function \n";

    alpha A1, A2, A3, A4;
    {
        cout<<"\n\nEnter in Block 1 \n\n";
        alpha A5;
    }
//    cout<< "\n\n Enter back in MAIN function after BLOCK 1\n";
    {
        cout<<"\n\nEnter in Block 2 \n\n";
        alpha A6;
    }

    cout<< "\n\n Enter back in MAIN function after BLOCK 2\n";
    return 0;
}
