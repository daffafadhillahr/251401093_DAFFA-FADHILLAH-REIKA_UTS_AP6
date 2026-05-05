#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm; //deklarasi variabel untuk menyimpan angka yang akan dicari deret fibonacinya
    int jumlah = 0; //deklarasi variabel untuk menyimpan jumlah dari deret fibonaci

    cout << "masukkan angka: "; //untuk menginput angka yang akan dicari deret fibonacinya
    cin >> n; //input angka yang akan dicari deret fibonacinya

    cout << "deret fibonaci: "; //untuk menampilkan deret fibonaci
    for(int i = 1; i <= n; i++) { //untuk proses perhitungan deret fibonaci
        
        nextTerm = t1 + t2; //untuk menghitung angka selanjutnya dalam deret fibonaci
        t1 = t2; //t1 diganti dengan t2
        t2 = nextTerm; //t2 diganti dengan nextTerm yang merupakan hasil penjumlahan t1 dan t2 sebelumnya
    }
    cout << t1; //untuk menampilkan angka terakhir dalam deret fibonaci
}