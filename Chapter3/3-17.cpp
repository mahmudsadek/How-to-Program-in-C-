#include <iostream>
using namespace std;

class HealthProfile
{
    private:

        string firstName;
        string lastName;
        bool gender;
        float weight;
        float height;
        int brithDay;
        int brithMonth;
        int brithYear;
        int currentDay;
        int currentMonth;
        int currantYear;
            
    public:

        HealthProfile(){}

        HealthProfile(string fName, string lName, bool gndr, int cDay, int cMonth, int cYear, int bDay, int bMonth, int bYear, float h, float w)
        {
            setFirstName(fName);
            setLastName(lName);
            setGender(gndr);
            setCurrentDay(cDay);
            setCurrentMonth(cMonth);
            setCurrentYear(cYear);
            setBirthDay(bDay);
            setBithMonth(bMonth);
            setBirthYear(bYear);
            setHeight(h);
            setWeight(w);
        }
        
        void setCurrentYear(int cYear)
        {
            currantYear = cYear;
        }
        void setCurrentMonth(int cMonth)
        {
            if (cMonth > 12)
            {
                currentMonth = 1;
            }else 
            {
                currentMonth = cMonth;
            }
        }
        void setCurrentDay(int cDay)
        {
            if(cDay > 31){
                currentDay = 1;
            }else
            {
                currentDay = cDay;
            }
            
        }
        void setFirstName(string fName)
        {
            firstName = fName;
        }
        void setLastName(string lName)
        {
            lastName = lName;
        }
        void setGender(bool g)
        {
            gender = g;
        }
        void setHeight(float h)
        {
            if (h < 0)
            {
                cout << "Height Can not be Nigative \n";
                height = 1.1;
            }else
            {
                height = h;
            }
            
        }
        void setWeight(float w)
        {
            if (w < 0)
            {
                cout << "Weight Can not be Nigative \n";
                weight = 1;
            }else
            {
                weight = w;
            }
        }
        void setBirthDay(int day)
        {
            if(day > 31){
                brithDay = 1;
            }else
            {
                brithDay = day;
            }
        }

        void setBithMonth(int month)
        {
            if (month > 12)
            {
                brithMonth = 1;
            }else 
            {
                brithMonth = month;
            }
        }
        void setBirthYear(int year)
        {
            if (year > getCurrentYear())
            {
                cout << "Invalide -Birth Year Can not be great than Current year-"<< endl;
                brithYear = 1950;
            }else
            {
                brithYear = year;
            }
        }
        string getFirstName()
        {
            return firstName;
        }
        string getLastName()
        {
            return lastName;
        }
        string getGender()
        {
            if (gender == true)
            {
                return "Male";
            }else
            {
                return "Female";
            }
        }
        float getHeight()
        {
            return height;
        }
        float getWieght()
        {
            return weight;
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
        float getBMI (){
            return getWieght()/(getHeight()*getHeight());
        }
        void displayInfo(){
            int day, month, year ;
            cout << "\n*****************************************\n\n";
            cout << "First  Name           : " << getFirstName() << endl;
            cout << "Last   Name           : " << getLastName() << endl;
            cout << "G e n d e r           : " << getGender() << endl;
            cout << "Date  of  Brith       : " << getBirthDay() << "/" << getBirthMonth() << "/" << getBirhYear() << endl;
            cout << "Age  in  Year         : " << getAge() << endl;
            cout << "Height In Meter       : " << getHeight() << endl;
            cout << "Weight In Kilo        : " << getWieght() << endl;
            cout << "Max  Heart  Rate      : " << getMaxiumumHeartRate() << endl;
            cout << "Target  Heart  Rate   : " << getTargetHeartRate85() <<" - " << getTargetHeartRate50() << endl;
            cout << "Body Mass Index (BMI) : " << getBMI() << endl;
            cout << "\n*****************************************\n";

        }

};

void displayBMI(){
    cout << "\n*****************************************\n";
    cout << "BMI VALUES \nUnderweight: less than 18.5 \nNormal: between 18.5 and 24.9 \nOverweight: between 25 and 29.9 \nObese: 30 or greater \n";
    cout << "\n*****************************************\n";
}

int main(){
    int day, month, year ;
    cout << "Enter current Day   : ";
    cin >> day;
    cout << "Enter current Month : ";
    cin >> month;
    cout << "Enter current Year  : ";
    cin >> year;
    
    HealthProfile person1("Mahmoud", "Sadek", true,
                        day, month, year, 30, 9, 2000, 1.7, 58.0);

    person1.getMaxiumumHeartRate();
    person1.getTargetHeartRate50();
    person1.getTargetHeartRate85();
    
    person1.displayInfo();
    displayBMI();
}


