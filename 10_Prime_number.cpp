#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    bool IsPrime = true;
    cout << "Enter the number: ";
    cin >> num;

    if (num <= 1)
    {
        IsPrime = false;
    }
    else
    {
        while (i * i <= num)
        {
            if (num % i == 0)
            {
                IsPrime = false;
                break;
            }
            i++;
        }
    }
    
    if (IsPrime)
    {
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }
    return 0;
}