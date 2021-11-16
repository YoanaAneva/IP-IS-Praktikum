#include <iostream>
using namespace std;
// task 0
// double biggerNumber (double firstNumber, double secondNumber)
// {
//     return firstNumber > secondNumber ? firstNumber : secondNumber;
// }
// int main()
// {
//     double firstNumber, secondNumber;
//     cin >> firstNumber >> secondNumber;
//     cout << biggerNumber(firstNumber, secondNumber) << endl;
//     return 0;
// }

int primeNumbers ()
{
    for (int i = 2; i < 100; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i / 2 && isPrime; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }

        }
        if (isPrime)
        {
           cout << i << " ";
        }

    }
}
int main ()
{
    primeNumbers();
    return 0;
}