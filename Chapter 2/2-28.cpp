#include <iostream>
using namespace std;
int main() {
    int number;
    cout << " Enter a Five-Digit Number : ";
    cin >> number ;
    cout << number/10000 << "\t";
    cout << (number/1000)%10 << "\t";
    cout << (number/100)%10 << "\t";
    cout << (number/10)%10<< "\t";
    cout << number%10<< "\t";
}