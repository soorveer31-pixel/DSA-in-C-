#include <iostream>
using namespace std;

int main()
{
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << "Character is UpperCase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        std::cout << "Character is LowerCase";
    }
    else if (ch >= '0' && ch <= '9')
    {
        std::cout << "Character is numeric";
    }
    else
    {
        std::cout << "Character is a symbole";
    }
    return 0;
}