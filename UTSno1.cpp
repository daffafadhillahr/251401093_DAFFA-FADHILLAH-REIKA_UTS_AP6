#include <iostream>
using namespace std;
int main () { 
    int a, b; //deklarasi variabel agar dapat menyimpan angka yang akan dicari FPBnya
    cout << "Masukkan jumlah angka : "; //untuk menginput angka yang akan dicari FPBnya
    cin >> a >> b; //input angka yang akan dicari FPBnya
    
    while (b != 0) { // untuk proses perhitungan FPB
        int sisa = a % b; //untuk menghitung sisa dari pembagian a dengan b
        a = b; //nilai a diganti dengan nilai b
        b = sisa; //nilai b diganti dengan sisa dari pembagian a dengan b
    }
    cout << "FPB: " << a << endl; //untuk menampilkan hasil FPB
}