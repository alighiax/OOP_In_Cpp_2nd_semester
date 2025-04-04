#include <iostream>
using namespace std;
// Define a class
class Student
{
    // Data Members (Variables)
    string name;
    string fathername; // Father Name
    int age;
    int ID;
    int num;

public:
    // Constructor
    Student(string n, string m, int a, int b, int c)
    {
        name = n;
        fathername = m;
        age = a;
        ID = b;
        num = c;
    }

    // Member Function (Method)
    void displayInfo()
    {
        cout << endl;
        cout << "Student # " << num << endl;
        cout << "Student Name: " << name << endl;
        cout << "Father Name: " << fathername << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << ID << endl;
    }
};

// Main function
int main()
{
    // Create an object of Student
    Student s1("Muhammad Ali Ghias", "Ghias Uddin", 20, 16682, 01);
    Student s2("Muhammad Umar", "Muhammad Waseem", 20, 16698, 02);
    Student s3("Muhammad Waleed", "Muhammad Shahid", 20, 16699, 03);

    // Call the display method
    s1.displayInfo();
    s2.displayInfo();
    s3.displayInfo();
}
