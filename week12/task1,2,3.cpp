#include <iostream>
using namespace std;
double findSum(double *arr, int size)
{
    if (size == 1)
    {
        return 0;
    }
    if (arr[0] > arr[1])
    {
        return arr[0] + findSum(arr + 1, size - 1);
    }
    return findSum(arr + 1, size - 1);
}

int findFib(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    return findFib(n - 1) + findFib(n - 2);
}

bool isPalindrome(char *str, int i, int length)
{
    if (i >= length - 1)
    {
        return true;
    }
    if(str[i] != str[length - 1])
    {
        return false;
    }
    return isPalindrome(str, i + 1, length - 1);

}
int main()
{
    int size = 7;
    double arr[] = {2, -1.9, 1.1, 3.5, 1, 0, 8.3};
    cout << findSum(arr, size) << endl;
    cout << findFib(5) << endl;
    int length = 3;
    char str[length + 1] = "aba";
    cout << boolalpha << isPalindrome(str, 0, length);

}