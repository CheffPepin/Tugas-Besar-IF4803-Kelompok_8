#include "film.h"
#include <iostream>
#include "string"
using namespace std;

void deleteFirstChild(listArtis L, adrArtis p){
    if(L.first == nullptr){
     p = nullptr;
    } else if(L.first ->next == nullptr){
        L.first == nullptr;
    } else {
        p = L.first;
        L.first = L.first ->next;
        p ->next = nullptr;
    }

}

void deleteLastChild(listArtis L, adrArtis p){
    adrArtis q = L.first;
    if(L.first== nullptr){

    } else if(L.first ->next == nullptr){
        L.first == nullptr;
    } else{
        while(q ->next ->next != nullptr){
            q = q ->next;
        }
        p = q ->next;
        q ->next = nullptr;

    }
}

void deleteAfterChild(listArtis L, adrArtis p, adrArtis prev){
    if(L.first == nullptr || prev ->next == nullptr){
        p = nullptr;
    }else if(prev ->next ->next == nullptr) {
        p = prev ->next;
        p ->next = nullptr;

    }else{
        p = prev ->next;
        prev ->next = p ->next;
        p ->next = nullptr;

    }
}

adrArtis findElemenChild(listArtis L, adrFilm p, string nama){
    adrArtis q = p ->cast;
    while(q ->info.nama != nama && q != nullptr){
        q = q ->next;
    }
    return q;
}

void viewChild(listFilm L1, listArtis L2){
    adrFilm p = L1.first;
    adrArtis q = p ->cast;

    while(p != nullptr){
        cout << "Judul film : " << p ->info.nama << endl;
        cout << "Daftar Pemain :" << endl;
        while(q != nullptr){
            cout << q ->info.nama << "( " << q ->info.umur << " )" << endl;
            cout << "dengan rating : " << q ->info.rating << endl;
            q = q ->next;
        }
        p = p ->next;
    }
}
