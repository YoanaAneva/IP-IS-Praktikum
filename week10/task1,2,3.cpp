#include <iostream>
using namespace std;
void swap(int *firstNum, int *secondNum)
{
    int *copy = firstNum;
    firstNum = secondNum;
    secondNum = copy;
}

int exchange(int &first, int &second)
{
    int temp = first;
    first = second;
    return temp;
}
void multiplyArray(int *array, int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        *(array + i) *= number; 
    }
}
int main()
{
    int a = 5;
    int b = 9;
    // cout << exchange(a, b) << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    int array[5] = {1, 2, 3, 4, 5};
    multiplyArray(array, 5, 3);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(array + i) << " ";
    // }
}
