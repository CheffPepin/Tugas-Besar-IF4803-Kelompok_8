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
