#include <iostream>
using namespace std;
const int MAX_SIZE = 50;
int countChars(char array[]);
int main()
{
    char array[MAX_SIZE];
    cin.getline(array,MAX_SIZE);
    cout << countChars(array) << endl;
}
int countChars(char array[])
{
    int count = 0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}