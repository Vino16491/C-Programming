#include<iostream>
#include<fstream>

using namespace std;

int main(){

    ofstream fout;
    fout.open("multipleFileOperationCountry.txt");

    fout<< "United States of America \n\n";
    fout<< "United Kingdom \n\n";
    fout<< "South Korea \n\n";
    fout<< "Bhandup \n\n";

    fout.close();

    fout.open("multipleFileOperationCapital.txt");

    fout<< "Washington \n\n";
    fout<< "London\n\n";
    fout<< "Seorinatoeza";

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;
    fin.open("multipleFileOperationCountry.txt");

    cout<< "contents of country file \n";

    while(fin){

        fin.getline(line, N);
        cout<< line << "\n\n";
    }

    fin.close();

    fin.open("multipleFileOperationCapital.txt");
    cout<< "\n\n Contents of Capital File \n\n";

    while(fin){

        fin.getline(line, N);
        cout<< line << "\n\n";
    }

    fin.close();

    return 0;
}
