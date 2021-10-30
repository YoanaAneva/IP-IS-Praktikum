#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cout << "a.x2+b.x+c=0" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    double D = b * b - 4 * a * c;
    double x1, x2;
    if (D > 0)
    {
        x1 = (- b + sqrt(D)) / (2 * a);
        x2 = (- b - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = (-b) / 2 * a;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else 
    {
        cout << "No solution" << endl;
    }
    return 0;
}