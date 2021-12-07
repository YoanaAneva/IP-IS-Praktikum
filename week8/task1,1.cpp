#include <iostream>
using namespace std;
void fillArray(int number, int oneDigNumber);

int main()
{
    int number, oneDigitNumber;
    cin >> number >> oneDigitNumber;
    fillArray(number, oneDigitNumber);
}
void fillArray(int number, int oneDigNumber)
{
    int copy = number;
    int size = 0;
    while(copy != 0)
    {
        copy /= 10;
        size++;
    }
    int array[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = number % 10 + oneDigNumber;
        if (array[i] > 9)
        {
            array[i] %= 10;
        }
        number /= 10;
    }
    cout << size << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << array[i];
    }
}