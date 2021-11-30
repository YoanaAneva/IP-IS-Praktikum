#include <iostream>
using namespace std;
void reverseArray(int array[], int size);
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70};
    reverseArray(array, 7);
}
void reverseArray(int array[], int size)
{
    int copyIndex;
    for(int i = 0; i < size; i++)
    {
        copyIndex = i;
        i = size - 1 - i;
        cout << array[i] << " ";
        i = copyIndex;
    }
}