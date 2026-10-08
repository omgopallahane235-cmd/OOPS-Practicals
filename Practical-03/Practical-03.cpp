// The human resources departments needS A simple application to organize employee information. Design an Employee class that stores employee 
//details an enables authorized staff to view the stored information whenever required 

#include <iostream>
#include <string>
using namespace std;

class employee{
    private:
    int id;
    string name;
    string department;
    double Salary;

    public:
    //manual setup function to populate data 

    void SetDetails(int empid,string empname, string empdept, double empsal)
    {
        id = empid;
        name =empname;
        department = empdept;
        Salary = empsal;

    }

    //Function to display employee info (authorised access)
    void displayinfo(bool authorized)const
    {
        if(authorized){
            cout<<"ID: "<<id<<"\n"
                <<"Name: "<<name<<"\n"
                <<"Department: "<< department << "\n"
                <<"Salary: $" << Salary << "\n"
                << "--------------------\n";

        }
        else
        {
            cout<<"Access Denied, You are not authorized to view this record.\n";

        }

    }
};

int main(){
    //Using a standard fixed-size array instead of vector
    const int MAX_EMPLOYEES = 2;
    employee stafflist[MAX_EMPLOYEES];

    //Populating employee details manually 
    stafflist[0].SetDetails(101,"Alice Smith","HR",55000.0);
    stafflist[1].SetDetails(102, "Bob Jones","Engineering",75000.0);

    //Simulate Hr authorization check 

    bool isAuthorizedHR = true;
    cout<<"---Employee Records (HR view)---\n";
    for(int i = 0;i < MAX_EMPLOYEES;i++)
    {
        stafflist[i].displayinfo(isAuthorizedHR);

    }
    return 0;
}
