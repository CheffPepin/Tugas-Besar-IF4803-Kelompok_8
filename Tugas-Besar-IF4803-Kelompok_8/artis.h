#ifndef ARTIS_H_INCLUDED
#define ARTIS_H_INCLUDED
#include <iostream>
#include "string"
#include "film.h"
using namespace std;

typedef struct elmArtis *adrArtis;
typedef struct elmFilm *adrFilm;

struct artis{
    string nama;
    int umur;
    float rating;
};

struct elmArtis{
    artis info;
    adrArtis next;
};


adrArtis createElementChild(string nama, int umur, float rating);
void insertFirstChild(adrFilm &q, adrArtis p);
void insertLastChild(adrFilm &q, adrArtis p);
void insertAfterChild(adrFilm &q, adrArtis prec, adrArtis p);
void deleteFirstChild(adrFilm &q, adrArtis p);
void deleteLastChild(adrFilm &q, adrArtis p){;
void deleteAfterChild(adrFilm &q, adrArtis p, adrArtis prec);
adrArtis findElemenChild(adrFilm p, string nama);
void viewChild(listFilm L1, listArtis L2);

#endif // ARTIS_H_INCLUDED






