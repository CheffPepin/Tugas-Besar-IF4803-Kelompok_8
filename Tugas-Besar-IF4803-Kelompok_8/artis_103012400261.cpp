#include "film.h"
#include <iostream>
#include "string"
using namespace std;

void deleteFirstChild(adrFilm q, adrArtis p){
    if(q ->cast == nullptr){
     p = nullptr;
    } else if(q ->cast ->next == nullptr){
        q ->cast == nullptr;
    } else {
        p = q ->cast;
        q ->cast = q ->cast ->next;
        p ->next = nullptr;
    }

}

void deleteLastChild(adrFilm q, adrArtis p){
    adrArtis x =  q ->cast;
    if(x== nullptr){

    } else if(x->next == nullptr){
         x == nullptr;
    } else{
        while(x ->next ->next != nullptr){
            x = x ->next;
        }
        p = x ->next;
        x ->next = nullptr;

    }
}

void deleteAfterChild(adrFilm q, adrArtis p, adrArtis prec){
    if(q ->cast == nullptr || prec ->next == nullptr){
        p = nullptr;
    }else if(prec ->next ->next == nullptr) {
        p = prec ->next;
        p ->next = nullptr;

    }else{
        p = prec ->next;
        prec ->next = p ->next;
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
