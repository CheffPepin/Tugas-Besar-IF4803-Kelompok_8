#include <iostream>
#include "artis.h"
#include "film.h"

void menuAdmin();
void menuUser();

using namespace std;

int main()
{
    int x = 99;
    while (x != 0){
        cout << "=====================\n";
        cout << "||       Menu      ||\n";
        cout << "---------------------\n";
        cout << "||1. Admin         ||\n";
        cout << "||2. User          ||\n";
        cout << "||0. Kembali       ||\n";
        cout << "====================\n";
        cout << "Pilih : ";
        cin >> x;
        if (x == 1){
            system("cls");
            menuAdmin();
        } else if (x == 2){
            system("cls");
            menuUser();
        } else if (x == 0){
           system("cls");
            cout << "=========================================\n";
            cout << "Terimakasih telah menggunakan program ini\n";
            cout << "=========================================\n";
        } else {
            system("cls");
            cout << "===================================\n";
            cout << "Inputan tidak sesuai yang diberikan\n";
            cout << "===================================\n";
        }
    }
    return 0;
}
