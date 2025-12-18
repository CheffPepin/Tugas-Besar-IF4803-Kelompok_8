#include "film.h"
#include <iostream>
#include "string"

using namespace std;
void deleteFirstParent(listFilm &L, adrFilm p){
    if(L.first == L.last && L.first == nullptr){
        p = nullptr;
        cout << "List Kosong" << endl;
    } else {
        p = L.first;
        if(L.first == L.last){
            L.first = nullptr;
            L.last = nullptr;
        } else {
            L.first = p ->next;
            p ->next = nullptr;
            L.first ->prev = nullptr;
        }
        cout << "Film telah dihapus" << endl;
    }
}
void deleteLastParent(listFilm &L, adrFilm p){
    if (L.last == nullptr){
        p = nullptr;
        cout << "List Kosong" << endl;
    } else if (L.first == L.last){
        p = L.last;
        L.first = nullptr;
        L.last = nullptr;
        cout << "Film telah dihapus" << endl;
    } else {
        p = L.last;
        L.last = p ->prev;
        p ->prev = nullptr;
        L.last ->next = nullptr;
        cout << "Film telah dihapus" << endl;
    }
}

void deleteAfterParent(listFilm &L, adrFilm prec, adrFilm p){
    if (prec->next != nullptr){
        if (prec->next == L.last){
            p = L.last;
            L.last ->prev = nullptr;
            prec ->next = nullptr;
            L.last = prec;
        } else {
            p = prec->next;
            prec->next = p->next;
            p->next->prev = prec;
            p->next = nullptr;
            p->prev = nullptr;
        }
    } else {
        p = nullptr;
    }
}
adrFilm findElemenParent(listFilm L, string name){
    adrFilm p;
    if (L.first != nullptr){
        p = L.first;
        while (p != nullptr && p->info.nama != name){
            p = p->next;
        }
        if (p->info.nama == name){
            return p;
        } else {
            return nullptr;
        }
    } else {
        cout << "List Kosong" << endl;
    }
}
void viewParent(listFilm L){
    adrFilm p;
    p = L.first;
    while (p != nullptr){
        cout << "Nama film : " << p->info.nama << endl;
        cout << "Tahun film : " << p->info.tahun << endl;
        cout << "Rating film : " << p->info.rating << endl;
        cout << "-----------------------------------------" << endl;
        p = p->next;
    }
}

//mengahpus semua film dengan rating di bawah 5.5

void hapusFilmJelek(listFilm &L, adrFilm p){
    adrFilm q = L.first;

    while(q != nullptr){
        if(q ->info.rating < 5.5){
            if(q == L.first){
                deleteFirstParent(L,p);
            } else if(q == L.last){
                deleteLastParent(L,p);
            } else {
                deleteAfterParent(L,q ->prev,p);
            }
        }
        q = q ->next;
    }
}

bool filmDuplikasi(listFilm L, string nama){
    elmFilm *p = L.first;
    while (p != nullptr){
        if (p->info.nama == nama){
            return true;
        }
        p = p->next;
    }
    return false;
}
