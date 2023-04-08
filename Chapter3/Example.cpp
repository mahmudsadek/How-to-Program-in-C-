#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
private:
    int courseName;
public:
    void setCourseName(int name){
        courseName = name;
    }
    int getCourseName(){
        return courseName;
    }
    void displayMassage(){
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    }
};

int main() {
    int nameOfCourse ;
    GradeBook gradeBook;

    cout << "Initial course name is: " << gradeBook.getCourseName() << endl;

    cout << "\nPlease enter the course name:" << endl;
    cin>> nameOfCourse;
    gradeBook.setCourseName(nameOfCourse);

    gradeBook.displayMassage();
}