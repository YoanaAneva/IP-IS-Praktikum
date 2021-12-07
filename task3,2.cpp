#include <iostream>
using namespace std;
void fillArray(int size, int array[]);
int countInverses(int size, int arra[]);
int main()
{
    int N;
    do
    {
        cout << "Enter the number of array's elements: ";
        cin >> N;

    } while (N < 1 && N > 100);

    int array[N];
    fillArray(N, array);
    cout << "Number of inverses: " << countInverses(N, array) << endl;
}
void fillArray(int size, int array[])
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}
int countInverses(int size, int array[])
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                count++;
            }
        }
    }
    return count;
}