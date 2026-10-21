#include <iostream>
using namespace std;
int main () {

    float ipk = 3.7;
    int penghasilan = 8500000;

    if (ipk >= 3.5) {
        if (penghasilan < 3000000) {
            cout << "lolos beasiswa penuh";
        } else {
            cout << "lolos beasiswa parsial";
        }
    } else {
        cout << "tidak lolos beasiswa";
    }
}