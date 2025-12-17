#include <iostream>
#include "artis.h"
#include "film.h"
#include "string"
#include "global.h"
using namespace std;

void menuUser(){
    createListParent(L);
    int pil = -99;
    while (pil != 0){
        cout << "==============================\n";
        cout << "      Menu Studi Kasus\n";
        cout << "----------__------------------\n";
        cout << "1. Insert Film (urut tahun)\n";
        cout << "2. Delete Film dengan rating buruk (rate di bawah 5.5)\n";
        cout << "3. insert aktor (di atas umur 16 tahun)\n";
        cout << "4. Delete aktor dengan performa buruk (rate di bawah 5.0)\n";
        cout << "5. jumlah film di dalam list\n";
        cout << "6. view film\n";
        cout << "7. view aktor\n";
        cout << "0. Kembali\n";
        cout << "======================\n";
        cout << "Pilih : ";
        cin >> pil;

        if(pil == 1){
            cout << "Nama Film : ";
            cin >> nama;
            cout << "Tahun Film : ";
            cin >> tahun;
            cout << "Rating Film : ";
            cin >> rating;
             p = createElementParent(nama, tahun, rating);
             UrutTahun(L,p);
            cout << "Film berhasil ditambahkan" << endl;

        } else if(pil == 2){
            hapusFilmJelek(L,p);

        } else if(pil == 3){
            string x;
            cout << "Judul film : ";
            cin >> x;
            p = findElemenParent(L,x);
            cout << "Nama Aktor : ";
            cin >> nama;
            cout << "Umur : ";
            cin >> umur;

            if(p != nullptr){
                ProteksiAnak(L,p,nama,umur,0.0);
            } else {
                cout << "data Film tidak dotemukan"<< endl;
            }


        } else if (pil == 4){
            hapusArtisRatingBuruk(p);
        }else if(pil == 5){
            int i = jumlahFilm(L);
            cout << "Ada " << i << " dalam list" << endl;
        } else if (pil == 6){
            viewParent(L);
        } else if (pil == 7){
            viewChild(L);
        }

}
}
