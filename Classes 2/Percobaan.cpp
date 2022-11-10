#include<iostream>
#include<string>

using namespace std;

class Student
{
private:
    int idNum;
    string lastname;
    double gradePointAverage;
public:
    void displayStudentData();
    void setIdNum(int);
    void setlastname(string);
    void setgradePointAverage(double);
};

void Student::displayStudentData()
{
    cout << "Student #" << idNum << "'s last name is " << lastname << endl;
    cout << "The grade point average for this student is " << gradePointAverage << endl;
}

void Student::setlastname(string name)
{
    lastname = name;
}

void Student::setIdNum(int num)
{
    const int MAX_NUM = 9999;
    if (num <= MAX_NUM)
        idNum = num;
    else
        idNum = MAX_NUM;
}

void Student::setgradePointAverage(double gpa)
{
    const int MAX_GPA = 4.0;
    if (gpa <= MAX_GPA)
        gradePointAverage = gpa;
    else 
        gradePointAverage = 0;
}

int main()
{
    Student aStudent;
    Student bStudent;
    aStudent.setlastname("Harjuna");
    aStudent.setIdNum(27);
    aStudent.setgradePointAverage(3.5);
    aStudent.displayStudentData();
    bStudent.setlastname("Wesse");
    bStudent.setIdNum(34567);
    bStudent.setgradePointAverage(4.5);
    bStudent.displayStudentData();
    return 0;
}