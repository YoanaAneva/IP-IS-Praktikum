#include <iostream>
using namespace std;
void fillArray (int array[], int size);
void removeK(int array[], int size, int k);
int main()
{
    int n, k;
    cin >> n;
    int array[n];
    fillArray(array, n);
    cin >> k;
    removeK(array, n, k);
}

void removeK(int array[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == k)
        {
            for(int j = i; j < size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            size--;
            --i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    
}

void fillArray (int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

