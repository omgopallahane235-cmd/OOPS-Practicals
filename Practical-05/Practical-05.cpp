//A college admission portal allows students to update their profiles online. Design a student class that correctly assigns the submitted details to the respective data members, even when the input variable names are the same as the class attributes.

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int rollNumber;
    string name;
    string course;

public:

    // Constructor
    Student(int rollNumber, string name, string course)
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }

    // Display student details
    void displayDetails()
    {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s1(101, "Bhavesh", "Computer Science");

    s1.displayDetails();

    return 0;
}
