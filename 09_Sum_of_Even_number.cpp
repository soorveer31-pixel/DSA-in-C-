#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 2;
    cout << "Enter the number: ";
    cin >> n;

    while (i <= n)
    {
        sum += i; 
        i += 2;
    }

    cout << "The sum of all even number upto " << n << " is " << sum;
    return 0;
}