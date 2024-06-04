#include <exception>
//untuk obyek exception yg akan digunakan
#include <iostream>
#include <array>
// untuk objek array yg akan digunakan
using namespace std;

int main()
{
    cout << "awal program" << endl; // penanda 1
    try {
        array<int, 3> data = {3, 5, 7};
        //pesan array int 3 element
        cout << data.at(5)<< endl;
        //memanggil array elemen ke 5
    }
}