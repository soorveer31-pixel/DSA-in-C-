#include <iostream>
using namespace std;

int main()
{
    int num;
    std::cout << "Enter the number: ";
    std::cin >> num;

    if (num > 0)
    {
        std::cout << "Number is positive";
    }
    else
    {
        if (num < 0)
        {
            std::cout << "Number is negative";
        }
        else
        {
            std::cout << "Number is zero";
        }
    }
    return 0;
}