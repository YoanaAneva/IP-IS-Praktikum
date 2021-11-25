#include <iostream>
using namespace std;
void play(int number)
{
    bool isGuessed = false;
    int guess;
    for (int i = 0; i < 3 && !isGuessed; i++)
    {
        cout << "Your guess: ";
        cin >> guess;
        if (guess == number)
        {
            isGuessed = true;
            cout << "Correct!" << endl;
        }
        else if (guess < number)
        {
            cout << "It's bigger!" << endl;
        }
        else 
        {
            cout << "It's smaller!" << endl;
        }
    }
}
int main()
{
    int number = rand();
    cout << "Guess the number!" << endl;
    play(number);
}