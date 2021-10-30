#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double sum;
    cout << "Enter your sum: ";
    cin >> sum;
    int inCurrency, outCurrency;
    cout << "Enter input currency (1-EUR, 2-USD, 3-GBP, 4-BGN): ";
    cin >> inCurrency;

    double lv;
    switch (inCurrency)
    {
    case 1 :
      lv = sum * 1.96;
      break;
    case 2 :
      lv = sum * 1.69;
      break;
    case 3 :
      lv = sum * 2.32;
      break;
    case 4 :
      lv = sum;
      break;
    default :
      cout << "Number not corresponding to a currency!" << endl;
    }
    cout << "Enter output currency(1-EUR, 2-USD, 3-GBP, 4-BGN): ";
    cin >> outCurrency;
    double newSum;
    switch (outCurrency)
    {
    case 1 :
      newSum = lv * 0.51;
      break;
    case 2 :
      newSum = lv * 0.59;
      break;
    case 3 : 
      newSum = lv * 0,43;
      break;
    case 4 :
      newSum = lv;
      break;
    default :
      cout << "Number not corresponding to a currency!" << endl;
      break;
    }
   cout << newSum << endl;
   return 0;
   
}