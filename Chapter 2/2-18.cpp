#include <iostream>
using namespace std;
int main() {
    int num1,num2 ;
    cout << "Enter 2 Numbers : ";
    cin >> num1 >> num2 ;
    if (num1 > num2){
        cout << num1 << "is larger \n";
    }else if (num2 > num1) {
        cout << num2 << " is larger \n";     
    }else {
        cout <<"These numbers are equal . \n";
    }
}