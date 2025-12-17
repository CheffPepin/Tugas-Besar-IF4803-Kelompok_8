#include <iostream>
#include "film.h"
#include "string"
using namespace std;

adrArtis createElementChild(string nama, int umur, float rating){
    adrArtis p;
    p = new elmArtis;
    p->info.nama = nama;
    p->info.umur = umur;
    p->info.rating = rating;
    p->next = nullptr;

    return p;
}

void insertFirstChild(adrFilm &q, adrArtis p){
        p->next = q->cast;
        q->cast = p;
}
void insertLastChild(adrFilm &q, adrArtis p){
    if (q->cast== nullptr){
        q->cast = p;
    } else {
        adrArtis a;
        a = q->cast;
        while (a->next != nullptr){
            a= a->next;
        }
        a->next = p;
    }
}
void insertAfterChild(adrFilm &q, adrArtis prec, adrArtis p){
    if (prec != nullptr){
        p->next = prec->next;
        prec->next = p;
    }
}

//memasukkan data child jika umurnya di atas 16
void ProteksiAnak(listFilm L,adrFilm p,string nama,int umur,float rate){
    if( umur > 16){
        adrArtis q = createElementChild(nama,umur,rate);
        float ret = hitungRatingArtis(L,nama);
        if(ret == 0.0){
            q ->info.rating = p ->info.rating;
        } else {
            q ->info.rating = ret;
        }

        if(p ->cast == nullptr){
            insertFirstChild(p,q);
        }else{
            insertLastChild(p,q);
        }

    } else {
        cout << "Anak belum cukup umur untuk di publish" << endl;
    }
}
