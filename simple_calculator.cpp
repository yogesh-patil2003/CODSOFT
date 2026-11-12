#include <iostream>
using namespace std;

int main()
{
    char a;
    float num1, num2, result;
    cout << "enter the operator (+,-,*,/,):";
    cin >> a;

    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;

    switch (a)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1; // Exit with an error code
        }
        break;
    default:
        cout << "Error: Invalid operator" << endl;
        return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}
