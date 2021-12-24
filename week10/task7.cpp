#include <iostream>
using namespace std;
const int CAPACITY = 30;
void transformLetters(char *array);
void transformNumbers(char *array);
void printArray(char *array);
int main()
{
    char array[CAPACITY];
    cin.getline(array, CAPACITY);
    transformLetters(array);
    transformNumbers(array);
    printArray(array);

}
void transformLetters(char *array)
{
    for (int i = 0; *(array + i) != '\0'; i++)
    {
        if(*(array + i) >= 'A' && *(array + i) <= 'Z')
        {
            *(array + i) += 'a' - 'A';
        }
        else
        {
            *(array + i) -= 'a' - 'A';
        }
    }
}

void transformNumbers(char *array)
{
    for (int i = 0; *(array + i) != '\0'; i++)
    {
        if (*(array + i) >= '0' && *(array + i) <= '9')
        {
            *(array + i) = '#';
        }
    }
}

void printArray(char *array)
{
    for (int i = 0; *(array + i) != '\0'; i++)
    {
        cout << *(array + i);
    }
}