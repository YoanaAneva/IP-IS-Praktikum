#include <iostream>
using namespace std;
//task4
int findSum(int *arr, int size)
{
    if (size == 0)
        return 0;

    return *arr + findSum(arr + 1, size - 1);
}

//task5
bool isAscending(int *arr, int size)
{
    if (size == 1)
        return true;

    if (arr[0] > arr[1])
        return false;

    return isAscending(arr + 1, size - 1);
}

//task6
bool isPowerOfTwo(int number)
{
    if (number == 1)
        return true;

    if (number % 2 != 0)
        return false;

    return isPowerOfTwo(number / 2);
}

//task7
int findSmallest(int *arr, int size, int smallest)
{
    if(size == 0)
        return smallest;

    if(arr[0] < smallest)
        smallest = arr[0];

    return findSmallest(arr + 1, size - 1, smallest);
}

int main()
{
    int arr[] = {1, 2, -9, 9, 3};
    int size = 5;
    cout << findSum(arr, size) << endl;
    cout << boolalpha << isAscending(arr, size) << endl;
    cout << isPowerOfTwo(32) << endl;
    cout << findSmallest(arr, size, arr[0]) << endl;
}