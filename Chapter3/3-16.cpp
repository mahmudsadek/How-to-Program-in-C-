#include <iostream>
using namespace std;

class HeartRates
{
    private:

        string firstName;
        string lastName;
        int brithDay;
        int brithMonth;
        int brithYear;
        int currentDay;
        int currentMonth;
        int currantYear;
            
    public:

        HeartRates(string fName, string lName, int bDay, int bMonth, int bYear, int cDay, int cMonth, int cYear)
        {
            setFirstName(fName);
            setLastName(lName);
            setBirthDay(bDay);
            setBithMonth(bMonth);
            setBirthYear(bYear);
            setCurrentDay(cDay);
            setCurrentMonth(cMonth);
            setCurrentYear(cYear);

        }
        HeartRates(string fName, string lName, int bDay, int bMonth, int bYear)
        {
            setFirstName(fName);
            setLastName(lName);
            setBirthDay(bDay);
            setBithMonth(bMonth);
            setBirthYear(bYear);

        }
        
        void setCurrentYear(int cYear)
        {
            currantYear = cYear;
        }
        void setCurrentMonth(int cMonth)
        {
            currentMonth = cMonth;
        }
        void setCurrentDay(int cDay)
        {
            currentDay = cDay;
        }
        void setFirstName(string fName)
        {
            firstName = fName;
        }
        void setLastName(string lName)
        {
            lastName = lName;
        }
        void setBirthDay(int day)
        {
            brithDay = day;
        }
        void setBithMonth(int month)
        {
            brithMonth = month;
        }
        void setBirthYear(int year)
        {
            brithYear = year;
        }
        string getFirstName()
        {
            return firstName;
        }
        string getLastName()
        {
            return lastName;
        }
        int getBirthDay()
        {
            return brithDay;
        }
        int getBirthMonth()
        {
            return brithMonth; 
        }
        int getBirhYear()
        {
            return brithYear;
        }
        int getCurrentDay(){
            return currentDay;
        }
        int getCurrentMonth(){
            return currentMonth;
        }
        int getCurrentYear(){
            return currantYear;
        }
        int getAge()
        {

            int currentInYear = (getCurrentYear()*365) + (getCurrentMonth()*30) + getCurrentDay();
            int ageInYear = (getBirhYear()*365) + (getBirthMonth()*30) + getBirthDay();
            
            return (currentInYear - ageInYear) / 365;
        }
        int getMaxiumumHeartRate()
        {
            return 220 - getAge();
        }
        int getTargetHeartRate50()
        {
            return (50*getMaxiumumHeartRate())/100 ;
        }
        int getTargetHeartRate85()
        {
            return (85*getMaxiumumHeartRate())/100 ;
        }
        void displayInfo(){
            int day, month, year ;
            cout << "First Name        : " << getFirstName() << endl;
            cout << "Last Name         : " << getLastName() << endl;
            cout << "Date of Brith     : " << getBirthDay() << "/" << getBirthMonth() << "/" << getBirhYear() << endl;
            cout << "Age in Year       : " << getAge() << endl;
            cout << "Max Heart Rate    : " << getMaxiumumHeartRate() << endl;
            cout << "Target Heart Rate : " << getTargetHeartRate85() <<" - " << getTargetHeartRate50() << endl;

        }

};
int main(){
    int day, month, year ;
    cout << "Enter current Day : ";
    cin >> day;
    cout << "Enter current Month : ";
    cin >> month;
    cout << "Enter current Year : ";
    cin >> year;
    HeartRates person1("Mahmoud", "Sadek", 30, 9,2000, day, month, year);
    person1.getMaxiumumHeartRate();
    person1.getTargetHeartRate50();
    person1.getTargetHeartRate85();
    cout << "\n*******************************\n\n";
    person1.displayInfo();
    cout << "\n*******************************\n";
}