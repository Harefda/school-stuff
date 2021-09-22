#include <iostream>

using namespace std;
int main(){
    int num;

    cout << "Enter number which consists of 3 digits" << endl;
    cin >> num;

    if ((num > 999) or (num < 100)){
        cout << "Wrong number, please, enther the number, which consists of 3 digits!" << endl;
    }

    else if (num % 2 == 1){
        cout << "Number is odd" << endl;
    }

    else {
        cout << "Number is even" << endl;
    }

    return 0;

}