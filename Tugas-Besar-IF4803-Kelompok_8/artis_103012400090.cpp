#include "film.h"
#include <iostream>
#include "string"
using namespace std;
void deleteFirstParent(listFilm &L, adrFilm p){
    if (L.first != nullptr){
        p = L.first;
        adrArtis q;
        while (p->cast.first != nullptr){
            deleteLastChild(p->cast, q);
        }
        L.first = L.first->next;
        p->next = nullptr;
    } else {
        cout << "List Kosong" << endl;
    }
}
void deleteLastParent(listFilm &L, adrFilm p){
    if (L.last == nullptr){
        cout << "List Kosong" << endl;
    } else if (L.first == L.last){
        deleteFirstParent(L, p);
    } else {
        p = L.last;
        adrArtis q;
        while (p->cast.first != nullptr){
            deleteFirstChild(p->cast, q);
        }
        L.last = p->prev;
        L.last->next = nullptr;
        p->next = nullptr;
        p->prev = nullptr;
    }
}
void deleteAfterParent(listFilm &L, adrFilm prec, adrFilm p){
    if (prec != nullptr && prec->next != nullptr){
        if (prec->next == L.last){
            deleteLastParent(L, p);
        } else {
            p = pre->next;
            adrArtis q;
            while (p->cast.first){
                deleteFirstChild(p->cast, q)
            }
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
        while (p != nullptr && p->nama != name){
            p = p->next;
        }
        if (p->nama == name){
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
        cout << "Nama film : " << p.nama << endl;
        cout << "Tahun film : " << p.tahun << endl;
        cout << "Rating film : " << p.rating << endl;
        p = p->next;
    }
}
