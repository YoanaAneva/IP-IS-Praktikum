#include <iostream>
using namespace std;
bool checkPrime (int number);
void printPairedNumbers (int m, int n);
int main()
{
    int m, n;
    cin >> m >> n;
    printPairedNumbers(m, n);
}

bool checkPrime(int number)
{
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true; 
}
void printPairedNumbers (int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if(checkPrime(i) && checkPrime(j) && i + 4 == j && i % 2 != 0 && j % 2 != 0)
            {
                cout << i << " " << j <<endl;
            }
        }

    }
}