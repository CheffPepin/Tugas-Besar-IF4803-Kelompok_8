#include "film.h"
#include <iostream>
#include "string"
using namespace std;

void createLisrParent(listFilm &L){
    L.first = nullptr;
    L.last = nullptr;
}

adrFilm createElementParent(listFilm &L, string nama, int tahun, float rate){
    adrFilm p = new elmFilm;
    p ->info.nama = nama;
    p ->info.rating = rate;
    p ->info.tahun = tahun;
    p ->next = nullptr;
    p ->prev = nullptr;
    p ->cast = nullptr;
    return p;
}

void insertFirstParent(listFilm &L, adrFilm p){
    if(L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    }else{
        p ->next = L.first;
        L.first ->prev = p;
        L.first = p;
    }
}

void insertLastParent(listFilm &L, adrFilm p){
    if(L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    }else{
        p ->prev = L.last;
        L.last ->next = p;
        L.last = p;
    }
}

void insertAfterParent(listFilm &L, adrFilm p, adrFilm prev){
    if(L.first == nullptr && L.last == nullptr){
        L.first = p;
        L.last = p;
    }else if(L.first == L.last || prev ->next == nullptr){
        insertLastParent(L,p);
    }else{
        prev ->next ->prev = p;
        p ->next = prev ->next;
        p ->prev = prev;
        prev ->next = p;
    }
}

