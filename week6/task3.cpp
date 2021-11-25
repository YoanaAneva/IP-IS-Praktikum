#include <iostream>
using namespace std;
double findDiscountPrice(double price, double discountPercent)
{
    int discountPrice = price - discountPercent / 100 * price;
    return discountPrice;
}
int main()
{
    double price, discountPercent;
    cin >> price >> discountPercent;
    cout << findDiscountPrice(price, discountPercent) << endl;
}