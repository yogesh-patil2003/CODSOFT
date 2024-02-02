#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number = (rand() % 100) + 1;
    int guess = 0;
    cout << "NUMBER GUESSING GAME\n\n";

    do
    {
        cout << "Guess the no. between 1 to 100 :";
        cin >> guess;
        if (guess > number)
            cout << "Guess lower!" << endl;
        else if (guess < number)
            cout << "Guess higher!" << endl;
        else
            cout << "You won!" << endl;

    } while (guess != number);
    return 0;
}
