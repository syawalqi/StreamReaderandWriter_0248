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
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup file nya
    outfile.close();

    //membuak file dalam mode membaca
    ifstream infile;
    //menunjuk ke sebuah file
    infile.open("contohfile.txt")

}