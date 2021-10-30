#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 1 && number <= 12)
    {
        cout << "The number is a valid month" << endl;
    }
    else
    {
        cout << "The number is not a valid month" << endl;
    }
    return 0;
}