#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    if ((a < (b + c)) &&
        (b < (a + c)) &&
        (c < (a + b)) &&
        (a > (b - c)) &&
        (b > (c - a)) &&
        (c > (a - b)))
    {
        cout << "A triangle can be formed" << endl;
    }
    else 
    {
        cout << "A triangle cannot be formed" << endl;
    }
    return 0;
}