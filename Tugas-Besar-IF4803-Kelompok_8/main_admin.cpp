#include <iostream>
#include "artis.h"
#include "film.h"
#include "string"
#include "global.h"
using namespace std;

void menuAdmin(){
    createListParent(L);
    int pil = -99;
    while (pil != 0){
        cout << "===============================\n";
        cout << "||        Menu Admin         ||\n";
        cout << "-------------------------------\n";
        cout << "||1. Insert First Film       ||\n";
        cout << "||2. Insert Last Film        ||\n";
        cout << "||3. Insert After Film       ||\n";
        cout << "||4. Delete First Film       ||\n";
        cout << "||5. Delete Last Film        ||\n";
        cout << "||6. Delete After Film       ||\n";
        cout << "||7. Find Nama Film          ||\n";
        cout << "||8. View Film               ||\n";
        cout << "-------------------------------\n";
        cout << "||9. Insert First Aktor      ||\n";
        cout << "||10. Insert Last Aktor      ||\n";
        cout << "||11. Insert After Aktor     ||\n";
        cout << "||12. Delete First Aktor     ||\n";
        cout << "||13. Delete Last Aktor      ||\n";
        cout << "||14. Delete After Aktor     ||\n";
        cout << "||15. Find Nama Aktor        ||\n";
        cout << "||16. View Aktor             ||\n";
        cout << "||0. Kembali                 ||\n";
        cout << "===============================\n";
        cout << "Pilih : ";
        cin >> pil;
        if (pil == 1){
            cout << "Nama Film : ";
            cin >> nama;
            cout << "Tahun Film : ";
            cin >> tahun;
            cout << "Rating Film : ";
            cin >> rating;
            adrFilm p = createElementParent(nama, tahun, rating);
           insertFirstParent(L,p);
            cout << "Film berhasil ditambahkan\n" << endl;

        } else if (pil == 2){
            cout << "Nama Film : ";
            cin >> nama;
            cout << "Tahun Film : ";
            cin >> tahun;
            cout << "Rating Film : ";
            cin >> rating;
            adrFilm p = createElementParent(nama, tahun, rating);
            insertLastParent(L, p);
            cout << "Film berhasil ditambahkan\n" << endl;

        } else if (pil == 3){
            string x;
            cout << "Masukan film setelah : ";
            cin >> x;
            adrFilm prec = findElemenParent(L, x);
            if (prec != nullptr){

                cout << "Nama Film : ";
                cin >> nama;
                cout << "Tahun Film : ";
                cin >> tahun;
                cout << "Rating Film : ";
                cin >> rating;
                adrFilm p = createElementParent(nama, tahun, rating);
                insertAfterParent(L, p, prec);
                cout << "Film berhasil ditambahkan\n" << endl;
            }

        } else if (pil == 4){
            deleteFirstParent(L,p);
            cout << "Film Telah dihapus\n" << endl;

        } else if (pil == 5){
            deleteLastParent(L,p);
            cout << endl;

        } else if (pil == 6){
            string x;
            cout << "Hapus setelah film : ";
            cin >> x;
            adrFilm prec = findElemenParent(L, x);
            if (prec != nullptr){
                deleteAfterParent(L, prec, p);
            } else {
                cout << "Data tidak ada sehingga tidak bisa menghapus\n" << endl;
            }
        } else if (pil == 7){
            string x;
            cout << "Cari nama film : ";
            cin >> x;
            adrFilm p = findElemenParent(L, x);
            if (p != nullptr)
                cout << "Film ditemukan\n";
            else
                cout << "Film tidak ditemukan\n";

        } else if (pil == 8){
            if (L.first != nullptr){
                viewParent(L);
                cout << endl;
            } else {
                cout << "Film tidak ada" << endl;
            }

        } else if(pil >= 9 && pil <= 11){
             string x, nama;
                int umur;
                float rating;

                cout << "Judul film aktor : ";
                cin >> x;
                adrFilm Film = findElemenParent(L,x);

                cout << "Nama Aktor : ";
                cin >> nama;
                cout << "Umur : ";
                cin >> umur;
                cout << "Rating : ";
                cin >> rating;

                adrArtis q = createElementChild(nama, umur, rating);
                if(pil == 9){
                    insertFirstChild(Film, q);
                } else if(pil == 10){
                    insertLastChild(Film,q);
                } else {
                    cout << "Masukan aktor setelah : ";
                    cin >> x;
                    adrArtis prec = findElemenChild(Film, x);
                    if (prec != nullptr){
                        insertAfterChild(Film, prec, q);
                    } else {
                        cout << "Aktor tidak ditemukan\n";
                    }
                }

        } else if(pil == 12){
            string x;
            cout << "Judul film : ";
            cin >> x;
            adrFilm p = findElemenParent(L,x);
            deleteFirstChild(p,q);

        } else if(pil == 13){
            string x;
            cout << "Judul film : ";
            cin >> x;
            adrFilm p = findElemenParent(L,x);
            deleteLastChild(p,q);

        } else if(pil == 14){
            string x,y;
            cout << "Judul film : ";
            cin >> x;
            cout << "Hapus setelah aktor : ";
            cin >> y;
             adrFilm p = findElemenParent(L,x);
             if(p != nullptr){
                adrArtis prec = findElemenChild(p,y);
                if (prec != nullptr) {
                    deleteAfterChild(p,q,prec);
                } else {
                    cout << "nama aktor tidak ada di dalam list"<<endl;
                }
             } else {
                cout << "judul film tidak ada di dalam list"<<endl;
             }


        }  else if (pil == 15){
            string x,y;
            cout << "Cari aktor : ";
            cin >> y;
            cout << "dalam film : ";
            cin >> x;
            adrFilm p = findElemenParent(L,x);
            if (p == nullptr){
                cout << "Film tidak ditemukan\n";
            } else {
                adrArtis a = findElemenChild(p, y);
                if (a != nullptr){
                    cout << "Aktor ditemukan\n";
                }else{
                    cout << "Aktor tidak ditemukan\n";
                }
            }

        } else if (pil == 16){
            viewChild(L);

        }else if (pil == 0) {
            system("cls");

        } else {
            cout << "Inputan Tidak Sesuai" << endl;
        }
    }
}
