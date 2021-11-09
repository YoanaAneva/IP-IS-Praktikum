#include <iostream>
using namespace std;

int main() {
    // task 1
    // int number;
    // do 
    // {
    //     cout << "Enter two-digit number: ";
    //     cin >> number;
    // } 
    // while(number < 10 || number > 99);
    // cout << endl;

    //task 2
    // a)
    // int n, m;
    // cin >> n;
    // cin >> m;
    // cout << n << " " << m << endl;
    // for (int i= 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     { 
    //         cout << "*";
    //     }
    //     cout << endl;  
    // }
    // // b)
    // cout << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = n; i > 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    
    // task 3
    int n;
    cin >> n;
    int factoriel = 1;
    for (int i = 2; i <= n; i++)
    {
        factoriel *= i;
    }
    cout << n << "! = " << factoriel;



    

    
}
