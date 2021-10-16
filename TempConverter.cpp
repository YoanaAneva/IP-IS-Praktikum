#include <iostream>
#include <string>
using namespace std;
int main() {
    double t_Fahrenheit, t_Celsius, t_Kelvin;
    cout << "Temperature in Fahrenheit:  ";
    cin >> t_Fahrenheit;
    string type;
    cout << "Celsius, Kelvin or both?: ";
    cin >> type;
    
    t_Celsius = ((t_Fahrenheit - 32) * 5) / 9;
    t_Kelvin = t_Celsius + 273.15;

    if (type == "Celsius") {
         cout << "Temperature in Celsius: " << t_Celsius << endl;
    }
    else if (type == "Kelvin") {
        cout << "Temperature in Kelvin: " << t_Kelvin << endl;
    }
    else {
        cout << "Temperature in Celsius: " << t_Celsius << endl;
        cout << "Temperature in Kelvin: " << t_Kelvin << endl;
    }
    return 0;

}