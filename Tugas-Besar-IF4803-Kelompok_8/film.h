#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
#include <iostream>
#include "string"
#include "artis.h"
using namespace std;

typedef struct elmFilm *adrFilm;
typedef struct elmArtis *adrArtis;

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
adrFilm createElementParent(listFilm &L, string nama, int tahun, float rate);
void insertFirstParent(listFilm &L, adrFilm p);
void insertLastParent(listFilm &L, adrFilm p);
void insertAfterParent(listFilm &L, adrFilm p, adrFilm prev);
void deleteFirstParent(listFilm &L, adrFilm p);
void deleteLastParent(listFilm &L, adrFilm p);
void deleteAfterParent(listFilm &L, adrFilm prec, adrFilm p);
adrFilm findElemenParent(listFilm L, string name);
void viewParent(listFilm L);

#endif // FILM_H_INCLUDED
