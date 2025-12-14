#include <iostream>
#include "artis.h"
#include "film.h"
#include "string"

using namespace std;

void menuUser(){
     int x = 99;
    while (x != 0){
        cout << "=============================\n";
        cout << "||        Menu User        ||\n";
        cout << "-----------------------------\n";
        cout << "||1. StudyCase 1           ||\n";
        cout << "||2. StudyCase 2           ||\n";
        cout << "||0. Kembali               ||\n";
        cout << "=============================\n";
        cout << "Pilih : ";
        cin >> x;
        if(x == 0) {
            system("cls");
        } else {
            cout << "Inputan tidak sesuai" << endl;
        }
    }
}
