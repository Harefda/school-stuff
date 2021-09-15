#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z, w, a, b, c;
    cout << "Введите x" << endl;
    cin >> x;

    cout << "Введите y" << endl;
    cin >> y;

    cout<< "Введите z"<< endl;
    cin>>z;

    w = pow(cos(x) - cos(y), 1 + 2 * pow(sin(y), 2))*(1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);
    cout<<"w = "<< w <<endl;

    return 0;
}