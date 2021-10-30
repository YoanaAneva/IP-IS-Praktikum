#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    cout << "Enter two real numbers: " << endl;
    cin >> num1;
    cin >> num2;

    if (num1 < 0 && num2 < 0)
    {
        cout << "Neither number is positive" << endl;
    }
    else if (num1 < 0 || num2 < 0)
    {
        cout << "One of the numbers is positive" << endl;
    }
    else
    {
        cout << "Both numbers are positive" << endl; 
    }
    return 0;
}