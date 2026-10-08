// A bookstore is introducing a digital inventory system to organize its collection of books. Design a Book class
// that stores essential book details and allows the staff to record and display the information whenever required.


#include <iostream>
#include <string>
using namespace std;


class Books{
    private:
    int bookid;
    string bookname;
    double bookprice;

    public:
    void details(int id, string name, double price){
        bookid = id;
        bookname = name;
        bookprice = price;
    }

    void display(){
        cout << "Book store books details"<<endl;
        cout << "Book ID: "<< bookid<< endl;
        cout << "Book Name: "<<bookname << endl;
        cout << "Book Price: "<< bookprice << endl;

    }
};

int main(){
    Books b1;
    b1.details(101, "Atomic Habit", 1499.99);
    
    cout<< "Book 1 Details"<<endl;
    b1.display();

    cout<<endl;

    cout<<"Book 2 Details";
    Books b2;
    b2.details(102, "Psycology of Money", 1599.58);
    b2.display();
    return 0;
}
