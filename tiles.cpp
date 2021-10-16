#include <iostream> 
#include <cmath>
using namespace std;
int main() {
    double n, m, a;
    cout << "Lenght: ";
    cin >> n;
    cout << "Width: ";
    cin >> m;
    cout << "Tile side: ";
    cin >> a;
    int number_tales = ceil(n / a) * ceil(m / a);
    cout << "MIn. number of tiles: " << number_tales << endl;
    return 0;

}