#include <iostream>

using namespace std;


int main() {
    int n, n1 = 0, n2 = 1, nextNum = 0;

    cout << "Enter the number: ";
    cin >> n;


    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << n1 << endl;
            continue;
        }
        if(i == 2) {
            cout << n2 << endl;
            continue;
        }
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
        
        cout << nextNum << endl;
    }
    return 0;
}