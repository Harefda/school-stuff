#include <iostream>

using namespace std;


int main(){
    int num, num2;
    bool isPrime=true, isPrime2=true;

    cout << "Enter first num: "; cin >> num;
    cout << "Enter second num: "; cin >> num2;

    if (num == 0 or num == 1) isPrime = false;
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }


    if (num2 == 0 or num2 == 1) isPrime = false;
    else {
        for (int i = 2; i <= num2 / 2; ++i) {
            if (num2 % i == 0) {
                isPrime = false;
                break;
            }
        }
    }


    if (isPrime)   cout << num << " is a prime number" << endl;
    else           cout << num << " is not a prime number" << endl;
    if (isPrime2)  cout << num2 << " is a prime number" << endl;
    else           cout << num2 << " is not a prime number" << endl;

    for (int i = num; i > 0; i--){
        cout << "nod: " << i;
        break;
    }

    return 0;
}