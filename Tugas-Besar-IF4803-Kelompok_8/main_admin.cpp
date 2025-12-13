#include <iostream>
#include "artis.h"
#include "film.h"
#include "string"
listFilm L;
using namespace std;

void menuAdmin(){
    createLisrParent(L);
    int x = -99;
    while (x != 0){
        cout << "======================\n";
        cout << "      Menu Admin\n";
        cout << "----------------------\n";
        cout << "1. Insert First Film\n";
        cout << "2. Insert Last Film\n";
        cout << "3. Insert After Film\n";
        cout << "4. Delete First Film\n";
        cout << "5. Delete Last Film\n";
        cout << "6. Delete After Film\n";
        cout << "7. Find Nama Film\n";
        cout << "8. View Film\n";
        cout << "----------------------\n";
        cout << "9. Insert First Aktor\n";
        cout << "10. Insert Last Aktor\n";
        cout << "11. Insert After Aktor\n";
        cout << "12. Delete First Aktor\n";
        cout << "13. Delete Last Aktor\n";
        cout << "14. Delete After Aktor\n";
        cout << "15. Find Nama Aktor\n";
        cout << "16. View Aktor\n";
        cout << "0. Kembali\n";
        cout << "======================\n";
        cout << "Pilih :";
        cin >> x;
        if (x == 1){
            string nama;
            int tahun;
            float rating;
            cout << "Nama Film : ";
            cin >> nama;
            cout << "Tahun Film : ";
            cin >> tahun;
            cout << "Rating Film : ";
            cin >> rating;
            adrFilm p = createElementParent(nama, tahun, rating);
            insertFirstParent(L, p);
            cout << "Film berhasil ditambahkan" << endl;
        } else if (x == 2){
            string nama;
            int tahun;
            float rating;
            cout << "Nama Film : ";
            cin >> nama;
            cout << "Tahun Film : ";
            cin >> tahun;
            cout << "Rating Film : ";
            cin >> rating;
            adrFilm p = createElementParent(nama, tahun, rating);
            insertLastParent(L, p);
            cout << "Film berhasil ditambahkan" << endl;
        } else if (x == 3){
            string x;
            cout << "Masukan film setelah : ";
            cin >> x;
            adrFilm prec = findElemenParent(L, x);
            if (prec != nullptr){
                string nama;
                int tahun;
                float rating;
                cout << "Nama Film : ";
                cin >> nama;
                cout << "Tahun Film : ";
                cin >> tahun;
                cout << "Rating Film : ";
                cin >> rating;
                adrFilm p = createElementParent(nama, tahun, rating);
                insertAfterParent(L, p, prec);
                cout << "Film berhasil ditambahkan" << endl;
            }
        }
    }
}
