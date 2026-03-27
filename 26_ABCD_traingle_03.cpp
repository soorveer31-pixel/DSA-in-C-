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
        char ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++, j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}