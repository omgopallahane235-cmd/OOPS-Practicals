//An HR application creates employee records temporarily while processing recruitment data. Design an
// Employee class that displays appropriate messages when employee records are created and automatically
// removed from memory after processing is completed.

#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string name;

public:
    // Constructor
    Employee(int id, string n)
    {
        emp_id = id;
        name = n;

        cout << "Employee record created for "
             << name << endl;
    }

    // Display employee details
    void display()
    {
        cout << "Employee ID: "
             << emp_id << endl;

        cout << "Employee Name: "
             << name << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee record removed for "
             << name << endl;
    }
};

int main()
{
    // Creating an employee object
    Employee emp(101, "Bhavesh");

    // Displaying employee details
    emp.display();

    // Object is automatically destroyed when main() ends
    return 0;
}
