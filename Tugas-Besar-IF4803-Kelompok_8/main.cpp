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
        cout << "===\n";
        cout << "Menu";
        cout << "===\n";
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Kembali\n";
        cout << "===\n";
        cout << "Pilih :";
        cin >> x;
        if (x == 1){
            menuAdmin();
            system("cls");
        } else if (x == 2){
            menuUser();
            system("cls");
        } else if (x < 0 && x > 2){
            cout << "===\n";
            cout << "Inputan tidak sesuai yang diberikan\n";
            cout << "===\n";
        } else {
            cout << "===\n";
            cout << "Terimakasih telah menggunakan program ini\n";
        }
    }
    return 0;
}
