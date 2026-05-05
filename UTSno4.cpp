#include <iostream>
using namespace std;

int main() {
    int angka, x, digit; //deklarasi variabel utnuk menyimpan angka yang akan dicek
    int jumlah = 0, banyakDigit = 0; //dkelarasi variabel untuk menyimpan jumlah dari hasil pangkat digit dan banyaknya digit dalam angka

    cout << "Input: "; //untuk menginput angka
    cin >> angka; //input angka yang akan dicek

    x = angka; //nilai x yang diganti dengan angka yang akan dicek

    while (x != 0) { //untuk menghitung banyaknya digit dalam angka
        x /= 10; //untuk menghilangkan digit terakhir dari x
        banyakDigit++; //untuk menambah banyakDigit setiap kali x masih memiliki digit
    }

    x = angka; //nilai x yang diganti dengan angka yang akan dicek

    cout << "Perhitungan: "; //untuk menampilkan proses perhitungan

    while (x != 0) { //untuk menghitung jumlah dari hasil pangkat digit
        digit = x % 10; //untuk mendapatkan digit terakhir dari x

        int hasilPangkat = 1; //deklarasi variabel untuk menyimpan hasil pangkat dari digit
        for (int i = 0; i < banyakDigit; i++) { //untuk menghitung hasil pangkat dari digit dengan banyakDigit sebagai pangkatnya
            hasilPangkat *= digit; //untuk menghitung hasil pangkat dengan mengalikan digit dengan dirinya sendiri
        }

        jumlah += hasilPangkat; //untuk menambahkan hasil pangkat dari digit ke jumlah total

        cout << digit << "^" << banyakDigit; //untuk menampilkan digit dan pangkatnya dalam proses perhitungan

        x /= 10; //untuk menghilangkan digit terakhir dari x
        if (x != 0) { 
            cout << " + "; //untuk menampilkan tanda tambah jika masih ada digit yang akan diproses
        }
    }

    cout << " = " << jumlah << endl; //untuk menampilkan hasil akhir dari perhitungan

    if (jumlah == angka) {
        cout << "Output: YES, " << angka << " is an Armstrong Number" << endl; //untuk menampilkan hasil jika angka tersebut armstrong number
    } else {
        cout << "Output: NO, " << angka << " is not an Armstrong Number" << endl; //untuk menampilkan hasil jika angka tersebut bukan armstrong number
    }

}