#include <iostream>
using namespace std;
int main()
{
    // task 4

    // int count = 0;
    // for (int i = 102; i <= 987; i++)
    // {
    //     int digit1 = i % 10;
    //     int digit2 = i / 10 % 10;
    //     int digit3 = i / 100;
    //     bool isUnique = digit1 != digit2 &&  
    //                     digit2 != digit3 &&
    //                     digit3 != digit1;
    //     if (isUnique)
    //     {
    //         count += 1;
    //         cout << i << " ";
    //         if (count % 10 == 0)
    //         {
    //             cout << endl;
    //         }
    //     }
    // }
    //  cout << endl << count << endl;

    // task 5
    //     int count = 0;
    //     for (int i = 100; i < 1000; i++)
    // {
        
    //     int digit1 = i / 100;
    //     int digit2 = i / 10 % 10;
    //     int digit3 = i % 10;
    //     int prDig = digit1;
    //     prDig = (digit2 != 0 ? prDig * digit2 : prDig);
    //     prDig = (digit3 != 0 ? prDig * digit3 : prDig);
    //     if (i % prDig == 0)
    //     {
    //         cout << i << " ";
    //         count += 1;
    //         if (count % 10 == 0)
    //         {
    //             cout << endl;
    //         }
    //     }
    // }
    // cout << endl << count << endl;

      cout << "Task 5\n";
    int counter = 0;
    for (int i = 100; i < 1000; ++i) {
        int firstDigit = i / 100;
        int secondDigit = i / 10 % 10;
        int thirdDigit = i % 10;
        int pow = firstDigit;
        pow = secondDigit != 0 ? pow * secondDigit : pow;
        pow = thirdDigit != 0 ? pow * thirdDigit : pow;
        if (i % pow == 0) {
            cout << i << " ";
            ++counter;
            if (counter % 10 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl << counter << endl;
}

    

    