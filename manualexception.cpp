#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat belajar di prodi TI UMY" << endl;
        throw 0.5; //melemparkan sebuah int maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;

    }

    catch(int a) {
        // blok akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        /*jika selain int maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }
    return 0;
}