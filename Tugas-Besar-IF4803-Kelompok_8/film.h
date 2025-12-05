#ifndef FILM_H_INCLUDED
#define FILM_H_INCLUDED
#include <iostream>
#include "string"
using namespace std;

typedef struct elmFilm *adrFilm;

struct film{
    string nama;
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

#endif // FILM_H_INCLUDED
