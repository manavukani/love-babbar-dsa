#include <iostream>
using namespace std;
class Student
{
    // private data members
private:
    string studentName;
    int studentRollno;
    int studentAge;

public:

    string getStudentName()
    {
        return studentName;
    }
    
    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }
    
    int getStudentRollno()
    {
        return studentRollno;
    }
    
    void setStudentRollno(int studentRollno)
    {
        this->studentRollno = studentRollno;
    }
    
    int getStudentAge()
    {
        return studentAge;
    }
    
    void setStudentAge(int studentAge)
    {
        this->studentAge = studentAge;
    }
};
int main()
{
    Student obj;

    // setting the values of the variables
    obj.setStudentName("Rahul");
    obj.setStudentRollno(101);
    obj.setStudentAge(22);
    
    // printing the values of the variables
    cout << "Student Name : " << obj.getStudentName() << endl;
    cout << "Student Rollno : " << obj.getStudentRollno() << endl;
    cout << "Student Age : " << obj.getStudentAge();
}

// Output:
// Student Name : Rahul
// Student Rollno : 101
// Student Age : 22