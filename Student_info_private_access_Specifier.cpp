// Student Class
#include <iostream> // header file for input and output
using namespace std; // standard fucntion

class Student // class defiition
{ // class vody
private: // private member
    string name; // string data type
    int age; // integer data type

public: // public member
    void setData(string a, int b) // method to set private members
    { // method to set private members
        name = a; // setting name
        age = b; // setting age
    } // end of method

    void displayData() // method to display private membes
    {  // method to disply private members
        cout << endl; // new line
        cout << "Name: " << name << endl; // displaying name
        cout << "Age: " << age << endl; // displaying age
    } // end of method
}; // end of class

int main() // main fuction
{ // main function body
    Student s1; // creating obeject of class student 1
    s1.setData("Ghias", 20); // Setting private data
    s1.displayData();      // Displaying private data

    Student s2; // creating obeject of class student 2
    s2.setData("Umar", 20); // Setting private data
    s2.displayData();      // Displaying private data

} // end of main fucntion
