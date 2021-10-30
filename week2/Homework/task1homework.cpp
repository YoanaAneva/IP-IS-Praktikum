#include <iostream>
using namespace std;
int main() {
    int beer, rakia, ice;
    cin >> beer >> rakia >> ice;

    bool drinksHome = (beer == 1 || (rakia == 1 && ice == 1));
    if (drinksHome)
    {
        cout << "Drinks home" << endl;
    }
    else
    {
        cout << "Buys cold beer" << endl;
    }
    return 0;
}