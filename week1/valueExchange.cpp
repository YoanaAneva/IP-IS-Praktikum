#include <iostream>
using namespace std;
int main(){
    int firstNumber, secondNumber;
    cout << "First number: ";
    cin >> firstNumber;
    cout << "Second number: ";
    cin >> secondNumber;
    firstNumber = firstNumber * secondNumber;
    secondNumber = firstNumber / secondNumber;
    firstNumber = firstNumber / secondNumber;
    cout << "First number: " << firstNumber << endl;
    cout << "Second number: " << secondNumber << endl;
    return 0;
}