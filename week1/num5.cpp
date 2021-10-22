#include <iostream>
using namespace std;
int main() {
    int num, first, second, third, forth, fifth, sum;
    cin >> num;
    first = num % 10;
    second = (num / 10) % 10;
    third = (num / 100) % 10;
    forth = (num / 1000) % 10;
    fifth = (num / 10000) % 10;
    sum = first + second + third + forth + fifth;
    cout << fifth << endl;
    cout << forth << endl;
    cout << third << endl;
    cout << second << endl;
    cout << first << endl;
    cout << sum << endl;
    
return 0;
}