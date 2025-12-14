#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
#include <iostream>
#include "string"
#include "artis.h"
using namespace std;

typedef struct elmFilm *adrFilm;

struct film{
    string nama;
    int tahun;
    float rating;
};

struct elmFilm{
    film info;
    adrFilm next, prev;
    adrArtis cast;
};

struct listFilm{
    adrFilm first, last;
};

void createListParent(listFilm &L);
adrFilm createElementParent(string nama, int tahun, float rate);
void insertFirstParent(listFilm &L, adrFilm p);
void insertLastParent(listFilm &L, adrFilm p);
void insertAfterParent(listFilm &L, adrFilm p, adrFilm prev);
void UrutTahun(listFilm &L, adrFilm p);
void deleteFirstParent(listFilm &L, adrFilm p);
void deleteLastParent(listFilm &L, adrFilm p);
void deleteAfterParent(listFilm &L, adrFilm prec, adrFilm p);
adrFilm findElemenParent(listFilm L, string name);
void viewParent(listFilm L);
void hapusFilmJelek(listFilm &L, adrFilm p);

#endif // FILM_H_INCLUDED
