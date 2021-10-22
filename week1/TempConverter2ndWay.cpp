#include <iostream>
using namespace std;
int main() {
double t_Fahrenheit, t_Celsius, t_Kelvin;
cout << "Enter temperature in Fahrenheit: ";
cin >> t_Fahrenheit;
int choice;
cout << "Chose a number to convert to:\n1.Celsius\n2.Kelvin\n3.both" << endl;
cin >> choice;
if (choice == 1) {
    t_Celsius = (t_Fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << t_Celsius<< endl;}
else if (choice == 2) {
    t_Kelvin = ((t_Fahrenheit - 32) * 5 / 9) + 273.15;
   cout << "Temperature in Kelvin: " << t_Kelvin << endl;}
else {
    t_Celsius = (t_Fahrenheit - 32) * 5 / 9;
    t_Kelvin = t_Celsius + 273.15;
    cout << "Temperature in Celsius: " << t_Celsius << endl;
    cout << "Temperature in Kelvin: " << t_Kelvin << endl;
    }
}