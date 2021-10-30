#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cout << "Enter chocolate's parameters: " << endl;
    cin >> n;
    cin >> m;
    cout << "How many blocks to cut?" << endl;
    cin >> k;
    
    if ((k % n == 0 && k < n * m) || (k % m == 0 && k < n * m))
    {
        cout << "YES, it's possible!" << endl;
    }
    else
    {
        cout << "No, it's impossible!" << endl;
    }
    return 0;

}