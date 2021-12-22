#include <iostream>
using namespace std;
int* findElement(int *arr, int size, int number)
{
    int *p;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == number)
        {
            return arr + i;
        }
    }
    return nullptr;
}
void findMinAndMax(int *array, int size, int &min, int &max)
{
    min = *array;
    max = *array;
    for (int i = 1; i < size; i++)
    {
        if(*(array + i) < min)
        {
            min = *(array + i);
        }
        if (*(array + i) > max)
        {
            max = *(array + i);
        }

    }
}
int main()
{
    int array[5] = {6, 1, 4, 23, 7};
    int number = 4;
    // int *p = findElement(array, 5, number);
    // cout << findElement(array, 5, number) << endl;
    int a, b;
    findMinAndMax(array, 5, a, b);
    cout << endl << "Min: " << a << endl << "Max: " << b << endl;
}