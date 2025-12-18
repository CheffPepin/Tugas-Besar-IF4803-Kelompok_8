#include <iostream>
#include "artis.h"
#include "film.h"
#include "string"
#include "global.h"
void dummyManyToManyDuplikasi();
using namespace std;

void menuUser(){
    createListParent(L);
    dummyManyToManyDuplikasi();
    viewParent(L);
    viewChild(L);
    int pil = -99;
    while (pil != 0){
        cout << "==============================\n";
        cout << "      Menu Studi Kasus\n";
        cout << "------------------------------\n";
        cout << "1. Insert Film (urut tahun)\n";
        cout << "2. Delete Film dengan rating buruk (rate di bawah 5.5)\n";
        cout << "3. Insert aktor (di atas umur 16 tahun)\n";
        cout << "4. Delete aktor dengan performa buruk (rate di bawah 5.0)\n";
        cout << "5. Jumlah film di dalam list\n";
        cout << "6. View film\n";
        cout << "7. View aktor\n";
        cout << "0. Kembali\n";
        cout << "==============================\n";
        cout << "Pilih : ";
        cin >> pil;

        if(pil == 1){
            cout << "Nama Film : ";
            cin >> nama;
            if (filmDuplikasi(L, nama)){
                cout << "Nama Film sudah ada" << endl;
            } else {
                cout << "Tahun Film : ";
                cin >> tahun;
                cout << "Rating Film : ";
                cin >> rating;
                p = createElementParent(nama, tahun, rating);
                UrutTahun(L,p);
                cout << "Film berhasil ditambahkan" << endl;
            }
        } else if(pil == 2){
            hapusFilmJelek(L,p);
            cout << "Film telah dihapus" << endl;
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
            if (L.first != nullptr){
                cout << endl;
                cout << "========== DATA FILM ==========" << endl;
                viewParent(L);
                cout << endl;
            } else {
                cout << "Film tidak ada" << endl;
            }
        } else if (pil == 7){
            if (L.first != nullptr){
                cout << endl;
                cout << "========== DATA AKTOR ==========" << endl;
                viewChild(L);
                cout << endl;
            } else {
                cout << "Aktor tidak ada" << endl;
            }
        } else if (pil == 0) {
            system("cls");
        } else {
            cout << "Inputan Tidak Sesuai" << endl;
        }
    }
}
void dummyManyToManyDuplikasi(){
    elmFilm *f1 = createElementParent("Inception", 2010, 8.8);
    elmFilm *f2 = createElementParent("Titanic", 1997, 9.0);
    elmFilm *f3 = createElementParent("Interstellar", 2014, 8.6);
    elmFilm *f4 = createElementParent("Dunkirk", 2017, 7.9);

    insertLastParent(L, f1);
    insertLastParent(L, f2);
    insertLastParent(L, f3);
    insertLastParent(L, f4);

    insertLastChild(f1, createElementChild("Leonardo", 49, 9.5));
    insertLastChild(f2, createElementChild("Leonardo", 49, 9.5));

    insertLastChild(f1, createElementChild("Anne", 42, 9.0));
    insertLastChild(f3, createElementChild("Anne", 42, 9.0));

    insertLastChild(f3, createElementChild("Matthew", 55, 9.4));

    insertLastChild(f1, createElementChild("TomHardy", 47, 8.8));
    insertLastChild(f4, createElementChild("TomHardy", 47, 8.8));
}
