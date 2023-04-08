#include <iostream>
using namespace std;

class Employee 
{
    private:
        string firstName;
        string lastName;
        float monthlySalary;
    public:

        Employee(string fName, string lName, float salary)
        {
            setFirstName(fName);
            setLastName(lName);
            setMonthlySalary(salary);
        }

        void setFirstName(string fName)
        {
            firstName = fName;
        }

        void setLastName(string lName)
        {
            lastName = lName;
        }

        void setMonthlySalary(float salary)
        {
            if (salary >= 0)
            {
                monthlySalary = salary;
            }else 
            {
                monthlySalary = 0 ;
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
        float getMonthlySalary()
        {
            return monthlySalary;
        }
        float getYearlySalary()
        {
            return getMonthlySalary()*12;
        }
        float getYearlySalaryWithRaise(float raise)
        {
            return getYearlySalary() + ((getYearlySalary() * raise) / 100) ;
        }
};
int main() {

    Employee employee1("Mahmoud", "Sadek", 8060.15);
    Employee employee2("Maison", "Mount", 15760.85);

    cout << employee1.getYearlySalary() << endl;
    cout << employee1.getYearlySalaryWithRaise(10) << endl;
}