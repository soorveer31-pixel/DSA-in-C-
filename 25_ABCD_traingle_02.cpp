#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    char ch = 'A';
    cout << "Enter the number: ";
    cin >> num;

    while (i <= num)
    {
        int j = 1;
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