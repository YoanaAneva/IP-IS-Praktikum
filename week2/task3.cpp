#include <iostream>
using namespace std;
int main(){
    int x, a, b;
    cout << "x= ";
    cin >> x;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;

    if (a < b)
    {
        if (x > a && x < b)
        {
            cout << "x is in (a,b)" << endl;
        }
        else 
        {
            cout << "x is not in (a,b)" << endl;
        }
    }
    else 
    {
        cout << "not a valid interval" << endl;
    }
return 0;
}