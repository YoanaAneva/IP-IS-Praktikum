#include <iostream>
using namespace std;
void fillArray(int sizeArray, int array[]);
void printArray(int sizeArray, int array[]);
void printEvenIndexes (int sizeArray, int array[]);
int countNumbersBiggerThanNeighbours (int sizeArray, int array[]);

int main()
{
    int sizeArray;
    do
    {
        cout << "Number of array elements: " << endl;
        cin >> sizeArray;
    } while (sizeArray < 0 || sizeArray > 100);

    int array[sizeArray];
    fillArray(sizeArray, array);
    // printEvenNumbers(sizeArray, array);
    // printEvenIndexes(sizeArray, array);
    cout << countNumbersBiggerThanNeighbours(sizeArray, array) << endl;
}
void fillArray(int sizeArray, int array[])
{
    for (int i = 0; i < sizeArray; i++)
    {
        cin >> array[i];
    }
}
void printEvenNumbers(int sizeArray, int array[])
{
    for (int i = 0; i < sizeArray - 1; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        } 
    }
}
void printEvenIndexes (int sizeArray, int array[])
{
    for (int i = 0; i < sizeArray; i++)
    {
        if (i % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }
}
int countNumbersBiggerThanNeighbours (int sizeArray, int array[])
{
    int count = 0;
    for (int i = 1; i < sizeArray; i++)
    {
        if (array[i - 1] < array[i] && array[i] > array[i + 1])
        {
            count++;
        } 
    }
    return count;
}