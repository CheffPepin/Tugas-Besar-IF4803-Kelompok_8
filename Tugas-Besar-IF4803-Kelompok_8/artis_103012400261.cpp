#include "film.h"
#include <iostream>
#include "string"
#include "artis.h"
using namespace std;

void deleteFirstChild(adrFilm &q, adrArtis p){
    if(q ->cast == nullptr){
     p = nullptr;
    } else if(q ->cast ->next == nullptr){
        p = q ->cast;
        q ->cast == nullptr;
    } else {
        p = q ->cast;
        q ->cast = q ->cast ->next;
        p ->next = nullptr;
    }
}



void deleteLastChild(adrFilm &q, adrArtis p){
    adrArtis x =  q ->cast;
    if(x== nullptr){

    } else if(x->next == nullptr){
         x == nullptr;
    } else{
        while(x ->next ->next != nullptr){
            x = x ->next;
        }
        p = x ->next;
        x ->next  = nullptr;

    }
}

void deleteAfterChild(adrFilm &q, adrArtis p, adrArtis prec){
    if(q ->cast == nullptr || prec ->next == nullptr){
        p = nullptr;
    }else{
        p = prec ->next;
        prec ->next = p ->next;
        p ->next = nullptr;

    }
}

adrArtis findElemenChild(adrFilm p, string nama){
    adrArtis q = p ->cast;
    while(q ->info.nama != nama && q != nullptr){
        q = q ->next;
    }
    return q;
}

void viewChild(adrFilm p){
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


