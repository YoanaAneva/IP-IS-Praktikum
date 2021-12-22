#include <iostream>
using namespace std;
const int COLS = 10;
void findElement(int matrix[][COLS], int rows, int cols, int number, int &row, int &col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == number)
            {
                row = i; 
                col = j;
                return;
            }
        }
    }
}
int main()
{
   int matrix[COLS][COLS] = {{1,2,3}, {4,5,6}, {7,8,9}};
   int number = 7;
   int row, column;
   findElement(matrix, 3, 3, number, row, column);
   cout << "Element parameters: " << row << ","<< column << endl;

   
}
