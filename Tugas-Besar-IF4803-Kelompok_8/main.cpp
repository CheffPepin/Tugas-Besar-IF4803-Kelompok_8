#include <iostream>
#include "artis.h"
#include "film.h"

using namespace std;

int main()
{
    int x;
    while (x != 0){
        cout << "===\n";
        cout << "Menu";
        cout << "===\n";
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Kembali\n";
        cout << "===\n";
        cout << "Pilih :";
        if (x == 1){
            menuAdmin();
            system(clear);
        } else if (x == 2){
            menuUser();
            system(clear);
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
