#include <iostream>
using namespace std;
const float pie = 3.14159;
int main() {
    int radius;
    cout << "Enter the radius : ";
    cin >> radius;
    cout << "circumference : " << 2*pie*radius << "\n"
        << "diameter : " << 2*radius << "\n"
        << "area : " << pie*radius*radius << "\n";
}