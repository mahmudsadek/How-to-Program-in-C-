#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3 ;
    cout << "Input three different integers : ";
    cin >> num1 >> num2 >> num3 ;
    cout << num1+num2+num3 << " IS the Sum \n";
    cout << (num1+num2+num3)/3 << " IS the Avrage \n";
    cout << (num1*num2*num3) << " IS the Prodact \n";
    if (num1 > num2 && num1 > num3){
        cout << num1 << "is the largest \n";
    }else {
        if(num2 > num1 && num2 > num3){
            cout << num2 << " is the largest \n";     
        }else{
            cout << num3 << " is the largest \n"; 
        }
    }
    if (num1 > num2 && num3 > num2){
        cout << num2 << "is the Smallest \n";
    }else {
        if (num2 > num1 && num3 > num1){
        cout << num1 << " is the Smallest \n";     
        }else{
            cout << num3 << " is the Smallest \n"; 
        }
    }
}