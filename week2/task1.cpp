#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter two different numbers: " << endl;
    cin >> num1;
    cin >> num2;
    if (num1 > num2)
    {
        cout << "Larger number: " << num1 << endl;;
    }
    else
    {
        cout << "Larger number: " << num2 << endl;
    }
    return 0;
}