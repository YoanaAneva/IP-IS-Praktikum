#include <iostream>
using namespace std;
int findnNumberFibonacci(int n)
{
    int first = 1;
    int second = 1;
    int third = 2;
    for(int i = 2; i < n + 1; i++)
    {
        first = second;
        second = third;
        third = first + second;
    }
    return first;

}
int main()
{
    int n;
    cin >> n;
    cout << findnNumberFibonacci(n) << endl;
}
