// Car info using private access specifier
#include <iostream>  // header file for input and output
using namespace std; // standard fuction
class Car            // class definition
{
private:                 // private member
    string name;         // string data type
    int year;            // integer data type
    string color;        // string data type
    string model;        // string data type
    string engine;       // string data type
    int price;           // integer data type
    int mileage;         // integer data type
    string fueltype;     // string data type
    string transmission; // string data type
    string owner;        // string data type
    string registration; // string data type

    public: // public member
    void setData(string a, int b, string c, string d, string e, int f, int g, string h, string i, string j, string k) // method to set private members
    {
        name = a;   // setting name
        year = b;   // setting year
        color = c;  // setting color
        model = d;  // setting model
        engine = e; // setting engine
        price = f; // setting price
        mileage = g; // setting mileage
        fueltype = h; // setting fuel type
        transmission = i; // setting transmission
        owner = j; // setting owner
        registration = k; // setting registration
    }
    void displayData()
    {
        cout << endl; // new line
        cout << "Name : " << name << endl; // display name
        cout << "Year : " << year << endl; // display year
        cout << "Color : " << color << endl; // display color
        cout << "Model : " << model << endl; // display model
        cout << "Endgine : " << engine <<endl; // display engine
        cout << "Price : " << price << " - 80 Lakh's" << endl; // display price // display price in lakh's as we mentioned in int so i write lakh's here
        cout << "Mileage : " << mileage << endl; // display mileage
        cout << "Fuel Type : " << fueltype << endl; // display fuel type
        cout << "Transmissiion : " << transmission << endl; // display transmission
        cout << "Owner : " << owner << endl; // display owner
        cout << "Registration : " << registration << endl; // display registration
    }
};
int main() // main function
{
    Car c1;
    c1.setData("Toyota", 2024, "White", "Grande X", "1.8L", 8000000, 16, "Petrol", "Automatic", "1st Owner", "Islamabad"); // setting private data
    c1.displayData(); // displaying private

}