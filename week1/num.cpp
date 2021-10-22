#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "3-digit number: " << endl;
    cin >> number;
    int first = number % 10;
    cout << "First digit: " << first << endl;
    int second = (number / 10) % 10;
    cout << "Second digit: " << second << endl;
    int third = number / 100;
    cout << "Third number: " << third << endl;
    int sum = first + second + third;
    cout << "Sum: " << sum << endl; 
    return 0; 
}