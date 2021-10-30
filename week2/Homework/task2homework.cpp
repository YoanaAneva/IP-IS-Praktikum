#include <iostream>
using namespace std;
int main(){
    double n, m;
    cout << "Line length in meters: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m += i * 2;
    }
    cout << "Total kilometers passed: " << m << endl;
    return 0;

}