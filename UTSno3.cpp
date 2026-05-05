#include <iostream>
using namespace std; 
int main () { 
    int a[5]; //deklarasi variabel untuk menyimpan 5 angka yang akan dibalik urutannya
    cout << "INPUT: "; //untuk menginput 5 angka yang akan dibalik urutannya
    for (int i = 0; i < 5; i++) { //untuk proses input 5 angka yang akan dibalik urutannya
        cin >> a[i]; //input angka yang akan dibalik urutannya
    } 
    cout << "OUTPUT: "; //untuk menampilkan 5 angka yang sudah dibalik urutannya
    for (int i = 4; i >= 0; i--) { //untuk proses menampilkan 5 angka yang sudah dibalik urutannya
        cout << a[i] << " "; //untuk menampilkan angka yang sudah dibalik urutannya
    }
    cout << endl; //untuk membuat baris baru 
}