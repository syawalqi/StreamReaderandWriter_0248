#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    //membuka file dalam mode menulis ofstream 
     ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // inlimited loop untuk menulis
    while (true) {
        cout << "-";
        getline(cin, baris);
        if (baris == "q") break;
    }
}