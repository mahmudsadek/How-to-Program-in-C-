#include <iostream> 
using namespace std;
int main() {
    int TotalMile ;
    int CostPerGallon;
    int AvgMilePerGallon;
    int ParkingFee ;
    int Tolls;

    cout << " Enter Total miles driven per day: ";
    cin >> TotalMile;
    cout << " Enter Cost per gallon of gasoline: ";
    cin >> CostPerGallon;
    cout << " Enter Average miles per gallon: ";
    cin >> AvgMilePerGallon;
    cout << " Enter Parking fees per day: ";
    cin >> ParkingFee;
    cout << " Enter Tolls per day: ";
    cin >> Tolls;

    TotalMile = (TotalMile/AvgMilePerGallon)*CostPerGallon;

    cout << "\n Total Cost : " << TotalMile + ParkingFee + Tolls << endl;
}