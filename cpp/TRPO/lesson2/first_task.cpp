#include <iostream>

using namespace std;


int main(){

    int length, width, sybmol;
    cout << "Enter length of rectangle - "; cin >> length;
    cout << "Enter width of rectagnle - "; cin >> width;
    cout << "Enter symbol - "; cin >> sybmol;

    for (int l=0; l>length; l++) {
        for (int w=0; w>width, w++) {
            cout << sybmol;
        }
        cout << endl
    }

    return 0;

}