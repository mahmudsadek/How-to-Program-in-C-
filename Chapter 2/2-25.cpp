#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter 2 Numbers : ";
    cin >> num1 >> num2 ;
    if (num1%num2 == 0){
        cout << num1 <<" is a multiple of " << num2 <<"\n";
    }
}