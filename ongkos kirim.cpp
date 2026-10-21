#include <iostream>
using namespace std;
int main () {

    string tujuan = "luar jawa";
    float berat = 4;

    if (tujuan == "jawa") {
        if (berat > 5) {
            cout << "ongkir Rp. 50.000";
        } else {
            cout << "ongkir Rp. 20.000";
        }
    } else {
        if (berat > 5) {
            cout << "ongkir Rp. 100.000";
        } else {
           cout << "ongkir Rp. 50.000"; 
        }
    }
}