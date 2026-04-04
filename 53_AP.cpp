#include <iostream>
using namespace std;

void Printing_Series(int num)
{
    int result = 0;
    for (int i = 1; i <= num; i++)
    {
        result = (3 * i + 7);
        cout << result << " ";
    }
}

int main()
{
    int num;
    cout << "Enter the term: ";
    cin >> num;

    Printing_Series(num);
    return 0;
}