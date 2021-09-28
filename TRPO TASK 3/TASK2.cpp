#include <iostream>

using namespace std;


int main() {
    int n, t1 = 0, t2 = 1, nextNum = 0;

    cout << "Enter the number: ";
    cin >> n;


    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << endl;
            continue;
        }
        if(i == 2) {
            cout << t2 << endl;
            continue;
        }
        nextNum = t1 + t2;
        t1 = t2;
        t2 = nextNum;
        
        cout << nextNum << endl;
    }
    return 0;
}