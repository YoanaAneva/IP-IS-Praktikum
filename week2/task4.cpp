#include <iostream>
using namespace std;
int main()
{
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;
    
    if (symbol > 'A' && symbol < 'Z' || symbol > 'a' && symbol < 'z')
    {
        cout << "The symbol is a letter";
    }
    else
    {
        cout << "The symbol is not a letter";
    }
return 0;
}
