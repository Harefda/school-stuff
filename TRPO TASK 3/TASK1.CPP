#include <iostream>

using namespace std;


int main(){

    int length, width;
    char symbol='#';
    
    cout << "Enter length of rectangle - "; cin >> length;
    cout << "Enter width of rectangle - "; cin >> width;

    for (int w=0; w < width; w++) {
        for (int l=0; l < length; l++) {
            cout << symbol;
        }
        cout << endl;
    }
    cout << "Area of this rectangle is " << width * length; 

    return 0;

}