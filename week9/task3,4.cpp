#include <iostream>
using namespace std;
const int MAX_COLS = 10;
int sumDiagonal(int matrix[][MAX_COLS], int size);
void transposeMatrix(int matrix[][MAX_COLS], int transposedMatrix[][MAX_COLS], int size);
int main()
{
    int size = 3;
    int transposedMatrix[MAX_COLS][MAX_COLS];
    int matrix[MAX_COLS][MAX_COLS] = {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}};
    cout << sumDiagonal(matrix, size) << endl;
    transposeMatrix(matrix, transposedMatrix, size);
}

int sumDiagonal(int matrix[][MAX_COLS], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = size - 1 - i; j >= size - 1 - i; j--)
        {
            if (i == j)
            {
                sum = sum;
            }
            else
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

void transposeMatrix(int matrix[][MAX_COLS], int transposedMatrix[  ][MAX_COLS], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
}