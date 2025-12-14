#include "film.h"
#include <iostream>
#include "string"
using namespace std;

void deleteFirstChild(adrFilm &q, adrArtis p){
    if(q ->cast == nullptr){
     p = nullptr;
    } else if(q ->cast ->next == nullptr){
        p = q ->cast;
        q ->cast = nullptr;
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
         x = nullptr;
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
    while( q != nullptr && q ->info.nama != nama){
        q = q ->next;
    }
    return q;
}

void viewChild(listFilm L){
   string Aktor[20];
   int x,i;

   listAktor(L, Aktor,x);

   for(i = 0; i < x; i++){
        cout << "Nama Artis : " << Aktor[i] << endl;
        cout << "berperan di film : ";
        adrFilm p = L.first;
        while(p != nullptr){
            adrArtis q = p ->cast;
            while(q != nullptr){
                if(q ->info.nama == Aktor[i]){
                    cout << p ->info.nama << ", ";
                }
                q = q ->next;
            }
            p = p ->next;
        }
        cout << endl;
   }

}


void listAktor(listFilm L, string Aktor[], int &x){
    adrFilm p = L.first;
    adrArtis q;
    x = 0;

    while(p != nullptr){
        q = p->cast;
        while(q != nullptr){

            int i = 0;
            while(i < x && Aktor[i] != q->info.nama){
                i++;
            }
            if(i == x){
                Aktor[x] = q->info.nama;
                x++;
            }

            q = q->next;
        }
        p = p->next;
    }
}
