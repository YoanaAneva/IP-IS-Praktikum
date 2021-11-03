#include <iostream>
using namespace std;
int main(){
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    switch (month)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 :
        {
           cout << "Days: 31" << endl;
        }
        break;
        case 4 :
        case 6 :
        case 9 :
        case 11 :
        {
            cout << "Days: 30" << endl;
        }
        break;
        case 2 :
           if ((year % 4 == 0) || (year % 100 && year % 400 == 0))
           {
               cout << "Days: 29" << endl;
           }
           else
           {
               cout << "Days: 28" << endl;
           }
           break;
            
         
         
    }
    return 0;
}