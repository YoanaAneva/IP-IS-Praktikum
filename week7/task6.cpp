#include <iostream>
using namespace std;
void multiplyWithInt(int size, double array[], int number);
void multiplyWithDouble(int size, double array[], double number);

int main()
{
    int intNum;
    double doubleNum;
    cout << "Integer to multiply with: ";
    cin >> intNum;
    cout << "Double number to multiply with: ";
    cin >> doubleNum;
    double array[] = {3, 72, -9.1, 0, 88, 13.2, -4, 11, 28}; 
    double copyArray[] = {3, 72, -9.1, 0, 88, 13.2, -4, 11, 28};
    multiplyWithInt(9, array, intNum);
    cout << endl;
    multiplyWithDouble(9, copyArray, doubleNum);
}
void multiplyWithInt(int size, double array[], int number)
{
    for (int i = 0; i < size; i++)
    {
        array[i] *= number;
        cout << array[i] << " ";
    }
}
void multiplyWithDouble(int size, double array[], double number)
{
     for (int i = 0; i < size; i++)
    {
        array[i] *= number;
        cout << array[i] << " ";
    }
}

