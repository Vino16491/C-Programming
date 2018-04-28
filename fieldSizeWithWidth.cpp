#include<iostream>
using namespace std;

int main(){

    int items[4] = {10, 8, 12, 15};
    int cost[4] = {75, 100, 60, 99};

    cout.width(5);
    cout<< "ITEMS";
    cout.width(10);
    cout<< "COST";

    cout.width(15);
    cout<< "Total Value" << "\n\n\n";

    int sum = 0;

    for (int i =0; i<4; i++){

        cout.width(5);
        cout<< items[i];

        cout.width(10);
        cout<< cost[i];

        int value = items[i] * cost[i];
        cout.width(15);
        cout<< value << "\n";

        sum = sum + value;
    }

    cout<< "\n Grand Total = ";

    cout.width(4);
    cout<< sum << "\n";

    return 0;
}
