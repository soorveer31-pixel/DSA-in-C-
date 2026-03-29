#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int num1, num2;
    char ch, exit[10];

    do
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter which operation do you want(+,-,/,%,*): ";
        cin >> ch;
        cout << "Enter second number: ";
        cin >> num2;

        switch (ch)
        {
        case '+':
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
            break;

        case '-':
            cout << "The subtraction of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
            break;

        case '*':
            cout << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Division not defined" << endl;
            }
            else
            {
                cout << "The division of " << num1 << " and " << num2 << " is " << float(num1) / float(num2) << endl;
            }
            break;

        case '%':
            cout << "The remainder of " << num1 << " and " << num2 << " is " << num1 % num2 << endl;
            break;

        default:
            cout << "Please enter valid operator"<<endl;
            break;
        }
        cout << "Do you want to exit(yes/no): ";
        cin >> exit;
    } while (strcmp(exit, "yes") != 0);
    return 0;
}