#include <iostream>

using namespace std;

int main(){

    float first_num, second_num, third_num, answer;

    cout << "Enter first number: ";
    cin >> first_num;

    cout << "Enter second number: ";
    cin >> second_num;

    cout << "Enter third number: ";
    cin >> third_num;

    answer = (first_num + second_num + third_num) / 3;
    cout << answer << endl;

    return 1;
}