#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int x1, x2, y1, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    double result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf ("Point 1:\nx = %d y = %d\nPoint 2:\nx = %d y = %d", x1, y1, x2, y2);
    cout << "\nResult: " << result << endl;
    return 0;
}
