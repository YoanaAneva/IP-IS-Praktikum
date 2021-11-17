#include <iostream>
using namespace std;

bool isPrimeNumber (int number);
bool isPalindrome (int number);
void PrintPrimePalindromes(int limit);

int main ()
{
    int n;
    cin >> n;
    PrintPrimePalindromes(n);
    return 0;
}
bool isPrimeNumber (int number)
{
    bool isPrime = true;
    for (int i = 2; i <= number / 2 && isPrime; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            return false;
        }
    }
    return true;
}
bool isPalindrome (int number)
{
    int copy = number;
    int reversedNumber = 0;
    while (copy != 0)
    {
        int lastDigit = copy % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        copy /= 10;
    }
    if (reversedNumber != number)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void PrintPrimePalindromes(int limit)
{
    for (int i = 2; i <= limit; i++)
    {
        if (isPrimeNumber(i) && isPalindrome(i))
        {
            cout << i << " ";
        }
    }
}