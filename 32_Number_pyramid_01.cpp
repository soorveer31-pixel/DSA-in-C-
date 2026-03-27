#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cout << "Enter the number: ";
    cin >> num;

    while (i <= num)
    {
        // Printing Spaces
        int j = 1;
        while (j <= (num - i))
        {
            cout << "  ";
            j++;
        }

        // Printing 1st part
        int k = 1;
        while (k <= i)
        {
            cout << k << " ";
            k++;
        }

        // Printing 2nd part
        int l = 2, value = i - 1;
        while (l <= i)
        {
            cout << value << " ";
            value--, l++;
        }
        cout << endl;
        i++;
    }

    return 0;
}