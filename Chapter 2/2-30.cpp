#include <iostream>
using namespace std;
int main() {
    float weight;
    float height;

    cout << "Enter Your Weight in Kilograms : ";
    cin >> weight;
    cout << "Enter Your Height in Meters : ";
    cin >> height;

    cout << "Your BMI is : " << weight/(height*height) << endl;
    cout << "BMI VALUES \nUnderweight: less than 18.5 \nNormal: between 18.5 and 24.9 \nOverweight: between 25 and 29.9 \nObese: 30 or greater \n";

}