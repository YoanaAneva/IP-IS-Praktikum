#include <iostream>
using namespace std;
const int ROWS = 10;
const int COLS = 10;
void multiplyMatrixes(int firstMatrix[][COLS], int secondMatirx[][COLS], int multipliedMatrix[][COLS], int rows1, int cols2);
void printMatrix(int matrix[][COLS], int rows, int cols);
int main()
{
    int rows1 = 3, cols1 = 2, rows2 = 2, cols2 = 3;
    int firstMatrix[ROWS][COLS] = {{1, 1}, {2, 2}, {3, 3}};
    int secondMatrix[ROWS][COLS] = {{1, 1, 1}, {2, 2, 2}};
    int multipliedMatrix[ROWS][COLS];
    multiplyMatrixes(firstMatrix, secondMatrix, multipliedMatrix, rows1, cols2);
    printMatrix(multipliedMatrix, rows1, cols2);
}

void multiplyMatrixes(int firstMatrix[][COLS], int secondMatirx[][COLS], int multipliedMatrix[][COLS], int rows1, int cols2)
{
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            int sum = 0;
            for (int k = 0; k < rows1; k++)
            {
                sum += firstMatrix[i][k] * secondMatirx[k][j];
            }
            multipliedMatrix[i][j] = sum;
        }
    }
}
void printMatrix(int matrix[][COLS], int rows, int cols)
{
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}