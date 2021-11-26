#include <iostream>
using namespace std;
const int MAX_SIZE = 80;
bool isPalindrome(char array[]);
int main()
{
    char array[MAX_SIZE];
    cin.getline(array, MAX_SIZE);
    cout << boolalpha << isPalindrome(array) << endl;
}
bool isPalindrome(char array[])
{
    int size = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0, j = size - 1;  i < size / 2; i++, j--)
    {
        if (array[i] != array[j])
        {
            return false;
        }
    }
    return true;
}