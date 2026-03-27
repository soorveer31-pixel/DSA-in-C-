#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cout << "Enter the number: ";
    cin >> num;

    while (i <= num)
    {
        int j = 1;
        while (j <= num - i)
        {
            cout << "  ";
            j++;
        }

        int k = 1;
        while (k <= i)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}