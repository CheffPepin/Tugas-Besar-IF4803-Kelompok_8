#ifndef ARTIS_H_INCLUDED
#define ARTIS_H_INCLUDED
#include <iostream>
#include "string"
using namespace std;

typedef struct elmArtis *adrArtis;

struct artis{
    string nama;
    int umur;
    float rating;
};

struct elmArtis{
    artis info;
    adrArtis next;
};

struct listArtis{
    adrArtis first;
};





#endif // ARTIS_H_INCLUDED
