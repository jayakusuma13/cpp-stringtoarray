// NIM/Nama : M. Qodir Ibrahim Jayakusuma
// Nama file :  PB04-16416303-170326-02
// Tanggal : 26 Maret 2017
// Deskripsi : Program perbaikan corrupt string

#include <iostream>
using namespace std;

int main(){
    //variabel
    int x,i,j=0;
    int cari;
    string nama, daftar[5];
    nama = "Hasan@David@Siti@Malvin@Iven";

    cout << "Masukan string nama : ";
    //cin >> nama;

    //looping untuk abjad nama
    for(i=0;i<25;i++){
        if(nama[i] == '@'){
            i++;
            j += 1;
        };
        daftar[j] += nama[i];
    };

    //looping pencari nama
    while(true){
        //cari nama
        cout << "Masukan nilai N :";
        cin >> cari;

        if(cari == -1){
          return 0;
        };

        cout << "Nama mahasiswa ke " << cari << " adalah : "
        << daftar[cari-1] << endl;
    };



}
