#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int number)
{
    bool isPowerOfTwo = false;

    for (int i = 0; i <= 30 && !isPowerOfTwo; i++)
    {
        int powNumber = pow(2, i);
        if (powNumber == number)
        {
            isPowerOfTwo = true;
            return true;
        }
    }
}
int main()
{
    int number;
    cin >> number;
    cout << boolalpha << isPowerOfTwo(number) << endl;
}