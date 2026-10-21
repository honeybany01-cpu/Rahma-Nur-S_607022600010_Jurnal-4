#include <iostream>
using namespace std;
int main () {

    float harga = 40000;
    int umur = 10;
    string hari = "weekday";

    if (hari == "weekend") {
        if (umur < 12) {
        harga = harga + 10000;
        } else{
        harga = harga + 20000;
        }
    }

    if (hari == "weekday") {
        harga = 40000;
    }
    cout << "harga tiket: Rp" << harga;
}