//practice code OOP in c++
#include <iostream> // input/output library
using namespace std; // standard fuction
class Car //class definition 
{
    string name; // data member
    string color; // data member
    string aftermarket; // data member
    int model; // data member
    int number; // data member
    int regesteredin; // data member

public: // access specifier
    Car(string a, string b, string c, int d, int e, int f) //constructor with parameters
    {
        name = a; // assign value to data member
        color = b; // assign value to data member
        aftermarket = c; // assign value to data member
        model = d; // assign value to data member
        number = e; // assign value to data member
        regesteredin = f; // assign value to data member
    }
    void displayinfo() //fuction to display the info of the car
    { // start of the fuction
        cout << endl; // print a new line
        cout << "Name: " << name << endl; // print the name os the ca
        cout << "color: " << color << endl; // print the color of the caar
        cout << "Modification: " << aftermarket << endl; // print the modification of the car
        cout << "Model: " << model << endl; // print the model of the car
        cout << "Number: " << number << endl; // print the number of the car
        cout << "Registered In: " << regesteredin << endl; // print the year the car was registered in
    } // end of displayinfo fuction
}; // end of class car

int main() //main fuction
{ // start of the main function
    //create an object of the cars class
    Car car1("Toyota Grande X", "Black", "Rims (Deep Dish)", 2025, 922, 2025);
    Car car2("CIVIC RS", "White", "Rims (Deep Dish)", 11, 001, 2024);

    //display th info of the car
    car1.displayinfo();
    car2.displayinfo(); 
} // end of the main function
