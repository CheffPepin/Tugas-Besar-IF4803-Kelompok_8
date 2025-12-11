#include "film.h"
#include <iostream>
#include "string"
#include "artis.h"
using namespace std;
void createListChild(listArtis &L){
    L.first = nullptr;
}
adrArtis createElementChild(string nama, int umur, float rating){
    adrArtis p = new elmArtis;
    p->info.nama = nama;
    p->info.umur = umur;
    p->info.rating = rating;
    p->next = nullptr;
    return p;
}
void insertFirstChild(listArtis &L, adrArtis p){
    if (L.first == nullptr){
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}
void insertLastChild(listArtis &L, adrArtis p){
    if (L.first == nullptr){
        L.first = p;
    } else {
        adrArtis q;
        q = L.first;
        while (q->next != nullptr){
            q = q->next;
        }
        q->next = p
    }
}
void insertAfterChild(listArtis &L, adrArtis prec, adrArtis p){
    if (L.first == nullptr){
        L.first = p;
    } else {
        p->next = prec->next;
        prec->next = p;
    }
}
