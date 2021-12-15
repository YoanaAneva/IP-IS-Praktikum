#include <iostream>
using namespace std;
const int COLS = 10;
int findSequence(double matrix[][COLS], double array[], int rows);
int main()
{
    int m = 3;
    int n = 6;
    double matrix[COLS][COLS] = {{1,1,1,1,1}, {2,2,2,2,2}, {1,2,3,4,5}};
    double array[n] = {1, 2, 3, 4, 5, 6};
    cout << findSequence(matrix, array, m) << endl;
}
int findSequence(double matrix[][COLS], double array[], int rows)
{
    int index = 0;
    int maxCounter = 0;
    for (int i = 0; i < 5; i++)
    {
        int counter = 0;
        for (int j = 0; j < rows; j++)
        {
            if(matrix[j][i] == array[j])
            {
                counter++;
            }
        }
        if (counter > maxCounter)
        {
            maxCounter = counter;
            index = i;
        }
    }
    return index;
}