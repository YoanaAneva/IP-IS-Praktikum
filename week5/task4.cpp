#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfNum(int number, int power)
{
    bool isPowerOfNum = false;

    for (int i = 0; i <= 15 && !isPowerOfNum; i++)
    {
        int powNumber = pow(power, i);
        if (powNumber == number || number == 1)
        {
            isPowerOfNum = true;
            return true;
        }
    }
}
int main()
{
    int number, power;
    cin >> number;
    cin >> power;
    cout << boolalpha << isPowerOfNum(number, power) << endl;
    return 0;
}